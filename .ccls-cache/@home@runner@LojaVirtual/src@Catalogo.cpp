#include "../include/Catalogo.h"

Catalogo::Catalogo() { produtos = {}; }

std::vector<Produto> Catalogo::getProdutos() { return this->produtos; }

void Catalogo::adicionaProduto(Produto produto) { produtos.push_back(produto); }

void Catalogo::listarProdutos() {
  for (Produto p : produtos) {
    std::cout << p.getNome() << " - " << p.getPreco() << std::endl;
  }
}

Produto *Catalogo::buscarProdutoPorId(int id) {
  for (Produto &p : produtos) {
    if (p.getId() == id) {
      return &p;
    }
  }
  return nullptr;
}