#include "../include/Pedido.h"
#include <spdlog/spdlog.h>

Pedido::Pedido(std::string cliente) { this->cliente = cliente; }

std::string Pedido::getCliente() { return this->cliente; }

void Pedido::adicionaProduto(Produto p) {
  this->produtos.push_back(p);
  spdlog::info("Produto adicionado ao pedido: {} (Preço: {})", p.getNome(),
               p.getPreco());
}

double Pedido::calcularTotal() {
  double total = 0;
  for (Produto p : produtos) {
    total += p.getPreco();
  }
  spdlog::info("Total calculado para o pedido do cliente {}: R${:.2f}",
               this->getCliente(), total);
  return total;
}