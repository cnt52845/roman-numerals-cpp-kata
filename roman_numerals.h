#pragma once

#include <string>

static std::string
to_roman(int number)
{
    if (number <= 0 || number >= 4000) {
        return "Error";
    }
    return "I";
}
