#include "bss_hw_params/ultra96v2/constants.h"

#include <gtest/gtest.h>


TEST(ultra96v2, constants)
{
	using namespace bss_hw_params::ultra96v2;

	EXPECT_GE(bitfile_compatible_until, 0);
}
