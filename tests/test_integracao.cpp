#include "../include/Catalogo.h"
#include "../include/Pedido.h"
#include "../include/Produto.h"
#include <gtest/gtest.h>

TEST(IntegracaoTests, CenárioCompleto) {
    // Criar catálogo e adicionar produtos
    Catalogo catalogo;
    Produto p1(1, "Produto 1", 30.0);
    Produto p2(2, "Produto 2", 20.0);
    catalogo.adicionaProduto(p1);
    catalogo.adicionaProduto(p2);

    // Criar pedido
    Pedido pedido("Cliente X");
    auto prod1 = catalogo.buscarProdutoPorId(1);
    auto prod2 = catalogo.buscarProdutoPorId(2);

    ASSERT_NE(prod1, nullptr);
    ASSERT_NE(prod2, nullptr);

    pedido.adicionaProduto(*prod1);
    pedido.adicionaProduto(*prod2);

    // Calcular total
    EXPECT_EQ(pedido.calcularTotal(), 50.0);
}
