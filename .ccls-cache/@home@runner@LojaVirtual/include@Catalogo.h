#include "Produto.h"
#include <iostream>
#include <memory>
#include <string>
#include <vector>

class Catalogo {

private:
  std::vector<Produto> produtos;

public:
  Catalogo();

  std::vector<Produto> getProdutos();
  void adicionaProduto(Produto produto);
  void listarProdutos();
  Produto *buscarProdutoPorId(int id);
};