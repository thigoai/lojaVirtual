#include "../include/Catalogo.h"
#include "../include/Produto.h"
#include <gtest/gtest.h>

TEST(CatalogoTests, AdicionarEListarProdutos) {
  Catalogo catalogo;
  Produto p1(1, "Produto 1", 10.0);
  Produto p2(2, "Produto 2", 15.5);

  catalogo.adicionaProduto(p1);
  catalogo.adicionaProduto(p2);

  auto produtos = catalogo.getProdutos();
  ASSERT_EQ(produtos.size(), 2);
  EXPECT_EQ(produtos[0].getNome(), "Produto 1");
  EXPECT_EQ(produtos[1].getPreco(), 15.5);
}

TEST(CatalogoTests, BuscarProdutoPorId) {
  Catalogo catalogo;
  Produto p1(1, "Produto 1", 10.0);
  catalogo.adicionaProduto(p1);

  auto produtoBuscado = catalogo.buscarProdutoPorId(1);
  ASSERT_NE(produtoBuscado, nullptr);
  EXPECT_EQ(produtoBuscado->getNome(), "Produto 1");

  EXPECT_EQ(catalogo.buscarProdutoPorId(99), nullptr);
}
