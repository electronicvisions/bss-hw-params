#include "bss_hw_params/cube_ethernet/constants.h"

#include <gtest/gtest.h>


TEST(cube_ethernet, constants)
{
	using namespace bss_hw_params::cube_ethernet;

	EXPECT_GE(bitfile_compatible_until, 0);
}
