include(CTest)

enable_testing()

koinos_add_test(koinos_proto_tests
  SOURCES
    main.cpp
    proto_test.cpp
    test_map.pb.cc
)

target_link_libraries(koinos_proto_tests Koinos::proto ${PLATFORM_SPECIFIC_LIBS})
target_include_directories(koinos_proto_tests PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>  # <prefix>/include
)
