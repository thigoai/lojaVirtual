# Baixa e adiciona o Google Test automaticamente
include(FetchContent)

FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/release-1.12.1.tar.gz
)

# Faz o download e compila o Google Test
FetchContent_MakeAvailable(googletest)

# Define os arquivos de teste
set(TEST_FILES
    test_produto.cpp
    test_pedido.cpp
    test_integracao.cpp
)

# Cria o executável para os testes
add_executable(run_tests ${TEST_FILES})

# Vincula o executável às bibliotecas necessárias
target_link_libraries(run_tests
    loja_virtual       # Biblioteca principal do projeto
    spdlog::spdlog     # Biblioteca de logging
    gtest              # Google Test
    gtest_main         # Main do Google Test
)

# Inclui os diretórios de cabeçalhos do projeto principal
target_include_directories(run_tests PRIVATE ${CMAKE_SOURCE_DIR}/src)

# Adiciona os testes ao sistema de teste do CMake
include(GoogleTest)
gtest_discover_tests(run_tests)
