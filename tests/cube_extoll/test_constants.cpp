#include "bss_hw_params/cube_extoll/constants.h"

#include <gtest/gtest.h>


TEST(cube_extoll, constants)
{
	using namespace bss_hw_params::cube_extoll;

	EXPECT_GE(bitfile_compatible_until, 0);
}
