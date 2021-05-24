#pragma once

#include "basic_test.h"

namespace algorithms_202104
{

class PowerHalfTest : public BasicTest
{
public:
    PowerHalfTest() = default;
    virtual ~PowerHalfTest() = default;

private:
    virtual bool test_passed(std::ifstream & ifs_in, std::ifstream & ifs_out);
};

}

// End of the file


//
