#include "bss_hw_params/frankenstein_ethernet/constants.h"

#include <gtest/gtest.h>


TEST(frankenstein_ethernet, constants)
{
	using namespace bss_hw_params::frankenstein_ethernet;

	EXPECT_GE(bitfile_compatible_until, 0);
}
