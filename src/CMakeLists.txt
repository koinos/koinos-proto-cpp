file(GLOB_RECURSE GEN_HEADERS "${PROJECT_SOURCE_DIR}/include/*.pb.h")
file(GLOB_RECURSE GEN_SOURCE "*.pb.cc")

add_library(proto
  koinos/serialization.cpp
  ${GEN_SOURCE}

  ${PROJECT_SOURCE_DIR}/include/koinos/serialization.hpp
  ${GEN_HEADERS}
)

target_link_libraries(
  proto
    PUBLIC
      protobuf::libprotobuf
      gRPC::grpc
)

target_include_directories(
  proto
    PUBLIC
      $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>
      $<INSTALL_INTERFACE:include>
)

add_library(Koinos::proto ALIAS proto)

add_library(proto_format
  koinos/serialization.cpp
  ${PROJECT_SOURCE_DIR}/include/koinos/serialization.hpp
)

koinos_add_format_target(proto_format)
set_target_properties(proto_format PROPERTIES EXCLUDE_FROM_ALL TRUE)

install(
  DIRECTORY
    ${PROJECT_SOURCE_DIR}/include
  DESTINATION
    include/
)
