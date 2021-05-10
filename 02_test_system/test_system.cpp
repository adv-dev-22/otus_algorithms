#include "test_system.h"

namespace algorithms_202104
{

TestSystemExecutor::TestSystemExecutor():
basic_test_(nullptr)
{

}

void TestSystemExecutor::setup(std::unique_ptr<BasicTest> && basicTest)
{
    basic_test_ = std::move(basicTest);
}

void TestSystemExecutor::run(int argc, char * argv [])
{
    basic_test_->execute(argc, argv);
}

}

// End of file

