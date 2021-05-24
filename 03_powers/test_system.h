#pragma once

#include "basic_test.h"
#include <memory>

namespace algorithms_202104
{

class TestSystemExecutor
{
public:
    TestSystemExecutor();
    virtual ~TestSystemExecutor() = default;

    void setup(std::unique_ptr<BasicTest> && basicTest);

    virtual void run(int argc, char * argv []);

private:
    std::unique_ptr<BasicTest> basic_test_;
};


template <typename T>
void run_test(int argc, char * argv [])
{
    std::unique_ptr<BasicTest> basic_test = std::make_unique<T>();

    TestSystemExecutor test_executor;

    test_executor.setup(std::move(basic_test));
    test_executor.run(argc, argv);
}

}

// End of the file

