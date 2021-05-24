#pragma once

#include <fstream>

namespace algorithms_202104
{

class BasicTest
{
public:
    BasicTest();
    virtual ~BasicTest();

    virtual void execute(int argc, char * argv []);

private:
    virtual bool test_passed(std::ifstream & ifs_in, std::ifstream & ifs_out) = 0;
};

}

// End of the file
