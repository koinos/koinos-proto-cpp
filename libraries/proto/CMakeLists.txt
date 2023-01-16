file(GLOB_RECURSE GEN_HEADERS "*.pb.h")
file(GLOB_RECURSE GEN_SOURCE  "*.pb.cc")
file(GLOB HEADERS "include/koinos/*.hpp")
add_library(koinos_proto
            serialization.cpp
            ${GEN_SOURCE}
            ${GEN_HEADERS}
            ${HEADERS})
target_link_libraries(koinos_proto PUBLIC protobuf::libprotobuf gRPC::grpc)
add_library(Koinos::proto ALIAS koinos_proto)

target_include_directories(koinos_proto PUBLIC
   $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
   $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/generated>
   $<INSTALL_INTERFACE:include>
)

install(
   DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/generated/"
   DESTINATION "include/"
   FILES_MATCHING PATTERN "*.pb.h" )

export(
   TARGETS ${KOINOS_LIB_TARGET_NAME}
   NAMESPACE Koinos::
   FILE ${KOINOS_LIB_CMAKE_PROJECT_TARGETS_FILE}
)

install(
   TARGETS ${KOINOS_LIB_TARGET_NAME}
   EXPORT ${KOINOS_LIB_TARGETS_EXPORT_NAME}
   INCLUDES DESTINATION ${KOINOS_LIB_INCLUDE_INSTALL_DIR}
   RUNTIME DESTINATION bin
   LIBRARY DESTINATION lib
   ARCHIVE DESTINATION lib
)

install(
   EXPORT ${KOINOS_LIB_TARGETS_EXPORT_NAME}
   NAMESPACE Koinos::
   DESTINATION ${KOINOS_LIB_CONFIG_INSTALL_DIR}
)
