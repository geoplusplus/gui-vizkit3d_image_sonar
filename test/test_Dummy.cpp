#include <boost/test/unit_test.hpp>
#include <vizkit3d_image_sonar/Dummy.hpp>

using namespace vizkit3d_image_sonar;

BOOST_AUTO_TEST_CASE(it_should_not_crash_when_welcome_is_called)
{
    vizkit3d_image_sonar::DummyClass dummy;
    dummy.welcome();
}
