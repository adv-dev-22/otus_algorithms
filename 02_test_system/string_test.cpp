#include "string_test.h"
#include <string>
#include <iostream>
#include <fstream>

namespace algorithms_202104
{

StringTest::StringTest():
BasicTest()
{
}

StringTest::~StringTest()
{
}

bool StringTest::test_passed(std::ifstream & ifs_in, std::ifstream & ifs_out)
{
    std::string str_in;
    ifs_in >> str_in;

    //std::cout << str_in << std::endl;

    std::size_t length_out;
    ifs_out >> length_out;

    const std::size_t length_in  = str_in.length();

    return (length_in == length_out);
}

}

// End of the file

