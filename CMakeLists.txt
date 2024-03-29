cmake_minimum_required(VERSION 3.19.0)

cmake_policy(VERSION 3.19.0...3.27.4)

include(FetchContent)
FetchContent_Declare(
  koinos_cmake
  GIT_REPOSITORY https://github.com/koinos/koinos-cmake.git
  GIT_TAG        v1.0.0
)
FetchContent_MakeAvailable(koinos_cmake)

include("${koinos_cmake_SOURCE_DIR}/Koinos.cmake")

project(koinos_proto
  VERSION 2.0.2
  DESCRIPTION "The Koinos proto library"
  LANGUAGES CXX C)

koinos_define_version()

koinos_add_package(Boost CONFIG REQUIRED
  ADD_COMPONENTS test
  FIND_COMPONENTS)

koinos_add_package(Protobuf CONFIG REQUIRED)
koinos_add_package(gRPC CONFIG REQUIRED)

add_subdirectory(src)
add_subdirectory(tests)
