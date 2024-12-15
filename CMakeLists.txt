cmake_minimum_required(VERSION 3.10)

project(ProjetoPedido VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include FetchContent para baixar o spdlog
include(FetchContent)

FetchContent_Declare(
    spdlog
    GIT_REPOSITORY https://github.com/gabime/spdlog.git
    GIT_TAG        v1.12.0  # Escolha a versão desejada
)

FetchContent_MakeAvailable(spdlog)

# Diretório com os arquivos de código principal
add_subdirectory(src)

# Ativar testes e adicionar o diretório de testes
enable_testing()
add_subdirectory(tests)
