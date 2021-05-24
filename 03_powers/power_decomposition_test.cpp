#include <iostream>
#include <iomanip>
#include <cmath>
#include "power_decomposition_test.h"

namespace algorithms_202104
{

bool PowerDecompositionTest::test_passed(std::ifstream & ifs_in, std::ifstream & ifs_out)
{
    long double A;
    unsigned long N;
    ifs_in >> A >> N;

    std::cout << A << " " << N << std::endl;

    long double answer;
    ifs_out >> answer;

//    std::cout << "answer = " << std::setprecision(15) << answer << std::endl;

    long double rezult = 1; //N % 2;
    long double AA = A;
    if (N % 2) rezult = A;

    N /= 2;

    while (N > 0)
    {
        auto res_n = N % 2;
        AA *= AA;
        if (res_n) rezult *= AA;

        N = N / 2;
    };

//    std::cout << "rezult = " << rezult << std::endl;

    return std::fabs(answer - rezult) < 1e-6;
}

}
