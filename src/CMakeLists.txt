# Define os arquivos fonte da biblioteca principal
set(SRC_FILES
    Produto.cpp
    Catalogo.cpp
    Pedido.cpp
)

# Cria a biblioteca principal do projeto
add_library(loja_virtual ${SRC_FILES})

# Inclui os diretórios de cabeçalhos
target_include_directories(loja_virtual PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Vincula a biblioteca à biblioteca spdlog para logging
target_link_libraries(loja_virtual PRIVATE spdlog::spdlog)

add_executable(main_exec main.cpp)
target_link_libraries(main_exec PRIVATE loja_virtual spdlog::spdlog)