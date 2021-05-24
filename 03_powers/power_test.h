#pragma once

#include "basic_test.h"

namespace algorithms_202104
{

class PowerTest : public BasicTest
{
public:
    PowerTest() = default;
    virtual ~PowerTest() = default;

private:
    virtual bool test_passed(std::ifstream & ifs_in, std::ifstream & ifs_out);
};

}

// End of the file
