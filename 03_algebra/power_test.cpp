#include <iostream>
#include <iomanip>
#include <cmath>
#include "power_test.h"

namespace algorithms_202104
{

bool PowerTest::test_passed(std::ifstream & ifs_in, std::ifstream & ifs_out)
{
    double A;
    unsigned long N;
    ifs_in >> A >> N;

    //std::cout << A << " " << N << std::endl;

    double answer;
    ifs_out >> answer;

    //std::cout << std::setprecision(15) << answer << std::endl;

    double rezult = 1.0;
    for (unsigned long k = 0; k < N; ++k)
    {
        rezult *= A;
    }

    //std::cout  << std::setprecision(14) << rezult << std::endl;

    return std::fabs(answer - rezult) < 1e-10;
}

}


//
