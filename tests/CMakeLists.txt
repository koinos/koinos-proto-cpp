include(CTest)

enable_testing()

koinos_add_test(proto_tests
  SOURCES
    main.cpp
    proto_test.cpp
    test_map.pb.cc
)

target_link_libraries(proto_tests Koinos::proto ${PLATFORM_SPECIFIC_LIBS})
target_include_directories(proto_tests PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>  # <prefix>/include
)

koinos_add_format(
  TARGET
    proto_tests
  EXCLUDE
    test_map.pb.cc
    include/koinos/test_map.pb.h
)

koinos_coverage(
  EXECUTABLE
    proto_tests
  EXCLUDE
    "./*"
    "*.pb.cc"
    "*.pb.h"
)
