cmake_minimum_required(VERSION 3.5)
project(testing_system VERSION 1.0)

add_library(test_system test_system.cpp basic_test.cpp)
set_target_properties(test_system PROPERTIES 
	CXX_STANDARD 17
	CXX_STANDARD_REQUIRED ON
)

add_executable(string_test_system main_string.cpp string_test.cpp)
target_link_libraries(string_test_system test_system)

# tickets


# End of the file

