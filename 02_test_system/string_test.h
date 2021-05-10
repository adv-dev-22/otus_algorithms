#pragma once

#include "basic_test.h"

namespace algorithms_202104
{

class StringTest : public BasicTest
{
public:
    StringTest();
    virtual ~StringTest();

private:
    virtual bool test_passed(std::ifstream & ifs_in, std::ifstream & ifs_out) override;
};

}

// End of the file

