include_directories(${PROJECTEULER_SOURCE_DIR}/problem_001)
link_directories(${PROJECTEULER_BINARY_DIR}/problem_001)

add_executable(problem_001 problem_001.cpp)
#target_link_libraries(problem_001 m) # link math
