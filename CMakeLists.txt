cmake_minimum_required(VERSION 3.20)
project(PhysicsSandbox LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include directories
include_directories("${PROJECT_SOURCE_DIR}/src/core/vec2")
include_directories("${PROJECT_SOURCE_DIR}/src/simulation/body")
include_directories("${PROJECT_SOURCE_DIR}/src/app")

# —обираем исполн€емый файл
add_executable(PhysicsSandbox
    src/app/main.cpp
    # добавл€й cpp файлы core и simulation, если они будут
 "src/simulation/world/world.h")
