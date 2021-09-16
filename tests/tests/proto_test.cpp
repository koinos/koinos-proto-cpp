#include <boost/test/unit_test.hpp>

#include <iostream>
#include <sstream>
#include <stdexcept>

#include <koinos/serialization.hpp>
#include <koinos/common.pb.h>
#include <koinos/test_map.pb.h>

struct proto_fixture{};

BOOST_FIXTURE_TEST_SUITE( proto_tests, proto_fixture )

BOOST_AUTO_TEST_CASE( canonical_test )
{
   BOOST_TEST_MESSAGE( "Testing canonical serialization" );

   // {"id": "foo", "height": 1, "previous": "bar"}
   constexpr char canon_cstr[] = { 0x0A, 0x03, 0x66, 0x6F, 0x6F, 0x10, 0x01, 0x1a, 0x03, 0x62, 0x61, 0x72 };
   std::string canon( canon_cstr, sizeof( canon_cstr ) );

   koinos::block_topology topo;
   topo.set_id( "foo" );
   topo.set_height( 1 );
   topo.set_previous( "bar" );

   BOOST_CHECK( serialize_canonically( topo ) == canon );

   std::stringstream ss;
   serialize_canonically( ss, topo );

   BOOST_CHECK( ss.str() == canon );

   koinos::test_map tm;
   auto m = tm.mutable_im_the_map();
   (*m)[0] = "foo";
   (*m)[1] = "bar";

   try
   {
      auto ser = serialize_canonically( tm );
      BOOST_CHECK( false );
   }
   catch( std::runtime_error& ) {}

   try
   {
      std::stringstream ss;
      serialize_canonically( ss, tm );
      BOOST_CHECK( false );
   }
   catch( std::runtime_error& ) {}

   koinos::map_wrapper mw;
   m = mw.mutable_nested_map()->mutable_im_the_map();
   (*m)[0] = "foo";
   (*m)[1] = "bar";

   try
   {
      auto ser = serialize_canonically( mw );
      BOOST_CHECK( false );
   }
   catch( std::runtime_error& ) {}

   try
   {
      std::stringstream ss;
      serialize_canonically( ss, mw );
      BOOST_CHECK( false );
   }
   catch( std::runtime_error& ) {}
}

BOOST_AUTO_TEST_SUITE_END()
