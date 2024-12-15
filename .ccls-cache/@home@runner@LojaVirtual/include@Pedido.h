#include "Produto.h"
#include <iostream>
#include <memory>
#include <string>
#include <vector>

class Pedido {
private:
  std::vector<Produto> produtos;
  std::string cliente;

public:
  Pedido(std::string cliente);

  std::string getCliente();

  void adicionaProduto(Produto produto);
  double calcularTotal();
};