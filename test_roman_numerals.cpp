#include <gmock/gmock.h>

#include "roman_numerals.h"

TEST(ToRoman, Basic)
{
    EXPECT_EQ(to_roman(1), "I");
}
