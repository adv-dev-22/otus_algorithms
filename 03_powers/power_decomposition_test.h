#pragma once

#include "basic_test.h"

namespace algorithms_202104
{

class PowerDecompositionTest : public BasicTest
{
public:
    PowerDecompositionTest() = default;
    virtual ~PowerDecompositionTest() = default;

private:
    virtual bool test_passed(std::ifstream & ifs_in, std::ifstream & ifs_out);
};

}

// End of the file
