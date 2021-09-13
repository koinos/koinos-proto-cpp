#include <boost/test/unit_test.hpp>

#include <iostream>
#include <sstream>

#include <koinos/serialization.hpp>
#include <koinos/common.pb.h>

struct proto_fixture{};

BOOST_FIXTURE_TEST_SUITE( proto_tests, proto_fixture )

BOOST_AUTO_TEST_CASE( canonical_test )
{
   BOOST_TEST_MESSAGE( "Testing canonical serialization" );

   // {"id": "foo", "height": 1, "previous": "bar"}
   constexpr char canon_cstr[] = { 0x00, 0x03, 0x66, 0x6F, 0x6F, 0x01, 0x01, 0x02, 0x03, 0x62, 0x01, 0x72 };
   std::string canon( canon_cstr, sizeof( canon_cstr ) );

   koinos::block_topology topo;
   topo.set_id( "foo" );
   topo.set_height( 1 );
   topo.set_previous( "bar" );

   BOOST_CHECK( serialize_canonically( topo ) == canon );

   std::stringstream ss;
   serialize_canonically( ss, topo );

   BOOST_CHECK( ss.str() == canon );
}

BOOST_AUTO_TEST_SUITE_END()
