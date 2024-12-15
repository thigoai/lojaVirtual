#include "Produto.h"
#include <iostream>
#include <memory>
#include <string>
#include <vector>

class Pedido {
private:
  std::vector<Produto> produtos;
  std::string nome;

public:
  Pedido(std::string nome);

  void adicionaProduto(Produto produto);
  double calcularTotal();
};