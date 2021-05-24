cmake_minimum_required(VERSION 3.5)
project(algebraic_algorithms VERSION 1.0)

add_library(test_system test_system.cpp basic_test.cpp)
set_target_properties(test_system PROPERTIES 
	CXX_STANDARD 17
	CXX_STANDARD_REQUIRED ON
)

# Powers
add_executable(powers main_power.cpp power_test.cpp)
target_link_libraries(powers test_system)
set_target_properties(powers PROPERTIES 
	CXX_STANDARD 17
	CXX_STANDARD_REQUIRED ON
)

add_executable(powers_half main_power_half.cpp power_half_test.cpp)
target_link_libraries(powers_half test_system)
set_target_properties(powers_half PROPERTIES 
	CXX_STANDARD 17
	CXX_STANDARD_REQUIRED ON
)

add_executable(powers_decomposition main_power_decomposition.cpp power_decomposition_test.cpp)
target_link_libraries(powers_decomposition test_system)
set_target_properties(powers_decomposition PROPERTIES 
	CXX_STANDARD 17
	CXX_STANDARD_REQUIRED ON
)


# End of the file

