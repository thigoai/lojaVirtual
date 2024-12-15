cmake_minimum_required(VERSION 3.10)

project(ProjetoPedido VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include(FetchContent)

FetchContent_Declare(
    spdlog
    GIT_REPOSITORY https://github.com/gabime/spdlog.git
    GIT_TAG        v1.12.0 
)

FetchContent_MakeAvailable(spdlog)

add_subdirectory(src)

enable_testing()
add_subdirectory(tests)
