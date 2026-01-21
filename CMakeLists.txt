cmake_minimum_required(VERSION 3.20)
project(PhysicsSandbox LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(SFML_DIR "D:/cpp/libs/SFML/SFML-3.0.2/lib/cmake/SFML")
find_package(SFML 3 REQUIRED COMPONENTS Graphics Window Network System)

include_directories("${PROJECT_SOURCE_DIR}/src/core/vec2")
include_directories("${PROJECT_SOURCE_DIR}/src/simulation/body")
include_directories("${PROJECT_SOURCE_DIR}/src/app")

add_executable(PhysicsSandbox
    src/app/main.cpp
)

target_link_libraries(PhysicsSandbox PRIVATE SFML::Graphics SFML::Window SFML::Network SFML::System)