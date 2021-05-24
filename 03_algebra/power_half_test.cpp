#include <iostream>
#include <iomanip>
#include <cmath>
#include "power_half_test.h"

namespace algorithms_202104
{

bool PowerHalfTest::test_passed(std::ifstream & ifs_in, std::ifstream & ifs_out)
{
    double A;
    unsigned long N;
    ifs_in >> A >> N;

    std::cout << A << " " << N << std::endl;

    double answer;
    ifs_out >> answer;

    std::cout << "answer = " << std::setprecision(15) << answer << std::endl;

    long double rezult = 1;

    long n_half_power = 0;
    if (N > 0)
    {
        const double n_pow = std::log2(N);
        n_half_power = std::floor(n_pow);

        std::cout << " hlf_pw = " << n_half_power << std::endl;

        long double AA = A;
        for (long k = 0; k < n_half_power; ++k)
        {
            AA *= AA;
        }

        std::cout << "AA = " << AA << std::endl;

        rezult = AA;
        const unsigned long power_2_nhfp = pow(2.0, n_half_power);
        for (unsigned long k = power_2_nhfp + 1; k <= N; k++)
        {
            rezult *= A;
        }
    }

    std::cout << "rezult = " << rezult << std::endl;



    //return false;
    return std::fabs(answer - rezult) < 1e-9;
}

}
