#pragma once

#include "basic_test.h"

namespace algorithms_202104
{

class TicketsTest : public BasicTest
{
public:
    TicketsTest();
    virtual ~TicketsTest();

private:
    virtual bool test_passed(std::ifstream & ifs_in, std::ifstream & ifs_out) override;
};

}
