cmake_minimum_required(VERSION 3.5)

set(CMAKE_CXX_STANDARD 11)
include_directories()
add_executable(test_exe 
    main.cc 
)
target_link_libraries(test_exe
    protos
)

