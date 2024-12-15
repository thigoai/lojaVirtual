#include "../include/Catalogo.h"
#include <spdlog/spdlog.h>

Catalogo::Catalogo() { produtos = {}; }

std::vector<Produto> Catalogo::getProdutos() { return this->produtos; }

void Catalogo::adicionaProduto(Produto p) {
  produtos.push_back(p);
  spdlog::info("Produto adicionado ao catálogo: {} (ID: {})", p.getNome(),
               p.getId());
}

void Catalogo::listarProdutos() {
  for (Produto p : produtos) {
    std::cout << p.getNome() << " - " << p.getPreco() << std::endl;
  }
}

Produto *Catalogo::buscarProdutoPorId(int id) {
  for (Produto &p : produtos) {
    if (p.getId() == id) {
      spdlog::info("Produto encontrado: {} (ID: {})", p.getNome(), id);
      return &p;
    }
  }
  spdlog::warn("Produto com ID {} não encontrado no catálogo.", id);
  return nullptr;
}