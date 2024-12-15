#include "../include/Pedido.h"
#include "../include/Produto.h"
#include <gtest/gtest.h>

TEST(PedidoTests, CalcularTotal) {
  Pedido pedido("Cliente A");
  Produto p1(1, "Produto 1", 10.0);
  Produto p2(2, "Produto 2", 20.0);

  pedido.adicionaProduto(p1);
  pedido.adicionaProduto(p2);

  EXPECT_EQ(pedido.calcularTotal(), 30.0);
}
