
set(SRC_FILES
    Produto.cpp
    Catalogo.cpp
    Pedido.cpp
)

# Adiciona uma biblioteca para o código principal
add_library(projeto_lib ${SRC_FILES})

# Inclui os diretórios de cabeçalho
target_include_directories(projeto_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
