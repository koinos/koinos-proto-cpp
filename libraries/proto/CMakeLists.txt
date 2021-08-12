file(GLOB_RECURSE GEN_HEADERS "*.capnp.h")
file(GLOB_RECURSE GEN_SOURCE  "*.capnp.c++")
add_library(koinos_proto
            ${GEN_SOURCE}
            ${GEN_HEADERS})
target_link_libraries(koinos_proto PUBLIC CapnProto::capnp)
add_library(Koinos::proto ALIAS koinos_proto)

target_include_directories(koinos_proto PUBLIC
   $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
   $<INSTALL_INTERFACE:include>
)

install(
   DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/generated/"
   DESTINATION "include/koinos/proto"
   FILES_MATCHING PATTERN "*.capnp.h" )

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
