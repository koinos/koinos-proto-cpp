cmake_minimum_required(VERSION 3.19.0)

cmake_policy(SET CMP0074 NEW)
cmake_policy(SET CMP0114 NEW)

if(${CMAKE_VERSION} VERSION_GREATER_EQUAL 3.24.0)
  cmake_policy(SET CMP0135 NEW)
endif()

if(${CMAKE_VERSION} VERSION_GREATER_EQUAL 3.27.0)
  cmake_policy(SET CMP0144 NEW)
endif()

include(FetchContent)
FetchContent_Declare(
  koinos_cmake
  GIT_REPOSITORY https://github.com/koinos/koinos-cmake.git
  GIT_TAG        94b6def6bd58224a2d6e38d94e143dab6eadb87e
)
FetchContent_MakeAvailable(koinos_cmake)

include("${koinos_cmake_SOURCE_DIR}/Koinos.cmake")

project(koinos_proto
  VERSION 1.0.0
  DESCRIPTION "The Koinos proto library"
  LANGUAGES CXX C)

koinos_define_version()

koinos_add_package(Boost CONFIG REQUIRED
  ADD_COMPONENTS test
  FIND_COMPONENTS)

koinos_add_package(Protobuf CONFIG REQUIRED)
koinos_add_package(gRPC CONFIG REQUIRED)
koinos_add_package(abseil NAME absl CONFIG REQUIRED)
koinos_add_package(re2 CONFIG REQUIRED)
koinos_add_package(c-ares CONFIG REQUIRED)
koinos_add_package(ZLIB CONFIG REQUIRED)

add_subdirectory(src)
add_subdirectory(tests)
