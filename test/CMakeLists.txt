cmake_minimum_required(VERSION 3.22.0-rc3)

set(This TutorialTests)

set(Sources
    TutorialTests.cpp
)

add_executable(${This} ${Sources})
target_link_libraries(${This} PUBLIC
    gtest_main
    my_project
)

add_test(
    NAME ${This}
    COMMAND ${This}
)