file(GLOB_RECURSE GEN_HEADERS "*.capnp.h")
file(GLOB_RECURSE GEN_SOURCE  "*.capnp.c++")
add_library(koinos_proto_cpp
            ${GEN_SOURCE}
            ${GEN_HEADERS})
target_include_directories(koinos_proto_cpp PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/generated)
target_link_libraries(koinos_proto_cpp CapnProto::capnp)
add_library(Koinos::proto_cpp ALIAS koinos_proto_cpp)
