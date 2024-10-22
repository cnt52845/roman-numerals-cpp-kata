#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "roman_numerals.h"

TEST(ToRoman, CheckBoundaries)
{
    EXPECT_EQ(to_roman(-1), "Error");
    EXPECT_EQ(to_roman(0), "Error");
    EXPECT_EQ(to_roman(4000), "Error");
}

TEST(ToRoman, Basic)
{
    EXPECT_EQ(to_roman(1), "I");
}
