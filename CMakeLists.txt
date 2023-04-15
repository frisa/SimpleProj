cmake_minimum_required(VERSION 3.26)
# setup the project name
project(MyProject)

# cofigure the build parameters
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# configure the Qt dependencies
set(CMAKE_PREFIX_PATH "/Users/jan/Qt/6.5.0/macos/lib/cmake/Qt6")
find_package(Qt6 REQUIRED COMPONENTS Core)
qt_standard_project_setup()

add_executable(myProgram
    myprogram.cpp
)
target_link_libraries(myProgram PRIVATE Qt6::Core)