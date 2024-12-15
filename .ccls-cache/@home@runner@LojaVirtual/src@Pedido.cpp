#include "../include/Pedido.h"

Pedido::Pedido(std::string nome) { this->nome = nome; }

void Pedido::adicionaProduto(Produto produto) {
  this->produtos.push_back(produto);
}

double Pedido::calcularTotal() {
  double total = 0;
  for (Produto p : produtos) {
    total += p.getPreco();
  }
  return total;
}