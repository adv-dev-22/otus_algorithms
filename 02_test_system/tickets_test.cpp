#include "tickets_test.h"
#include <string>
#include <iostream>
#include <fstream>
#include <vector>

namespace algorithms_202104
{

TicketsTest::TicketsTest():
BasicTest()
{
}

TicketsTest::~TicketsTest()
{
}

const std::size_t compute_happy_tickets(const std::size_t n_in)
{
    std::vector<std::vector<std::size_t>> sums(n_in + 1);
    sums[1].resize(10);
    for (std::size_t i = 0; i < 10; ++i) sums[1][i] = 1;

    for (std::size_t k = 2; k <= n_in; ++k)
    {
        const std::size_t length_k = k * 9;
        sums[k].resize(length_k + 1);

        for (std::size_t i = 0; i <= length_k; ++i)
        {
            std::size_t colmn_sum = 0;
            std::size_t a = i + 9 > length_k ? 9 - (length_k - i) : 0;
            std::size_t b = i < 9 ? i : 9;

            for (std::size_t j = a; j <= b; ++j)
            {
                const int idx = i - j;
                colmn_sum += sums[k-1][idx];
            }

            sums[k][i] = colmn_sum;
        }
    }

    const std::size_t length_n = n_in * 9;
    std::size_t sq_sum = 0;
    for (std::size_t i = 0; i <= length_n; ++i)
    {
        sq_sum += sums[n_in][i] * sums[n_in][i];
    }

    return sq_sum;
}

bool TicketsTest::test_passed(std::ifstream & ifs_in, std::ifstream & ifs_out)
{
    std::size_t n_in;
    ifs_in >> n_in;

    std::size_t number_out;
    ifs_out >> number_out;

    const std::size_t happy_number = compute_happy_tickets(n_in);

    return (happy_number == number_out);
}

}

// End of the file
