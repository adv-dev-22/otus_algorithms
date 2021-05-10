#include "basic_test.h"
#include <iostream>

namespace algorithms_202104
{

BasicTest::BasicTest()
{
}

BasicTest::~BasicTest()
{
}

void BasicTest::execute([[maybe_unused]] int argc, [[maybe_unused]] char * argv [])
{
    if (argc < 3)
    {
        std::cout << "Wrong format! The correct onr should be:" << std::endl;
        std::cout << "test_run    path_to_dir    number_of_files" << std::endl;
        return;
    }

    std::string path(argv[1]);
    const int number_of_tests = std::atoi(argv[2]);

    std::cout << "Open files from: " << path << std::endl;
    std::cout << "Number of files: " << number_of_tests << std::endl;

    std::string fname = path + std::string("test.");

    for (int k = 0; k < number_of_tests; ++k)
    {
        const std::string fname_in  = fname + std::to_string(k) + std::string(".in" );
        const std::string fname_out = fname + std::to_string(k) + std::string(".out");

        std::ifstream infile_in (fname_in , std::ifstream::in);
        std::ifstream infile_out(fname_out, std::ifstream::in);

        // Main processing invocation. Reimplemented in inherited classes.
        std::cout << "Test " << k << " ";
        if (test_passed(infile_in, infile_out))
        {
            std::cout << "passed" << std::endl;
        }
        else
        {
            std::cout << "failed" << std::endl;
        }

        infile_in.close();
        infile_out.close();
    }
}

}

// End of the file

