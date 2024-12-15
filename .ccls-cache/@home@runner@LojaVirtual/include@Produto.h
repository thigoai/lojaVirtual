
#ifndef PRODUTO_H
#define PRODUTO_H

#include <iostream>
#include <string>

class Produto {

private:
  int id;
  std::string nome;
  double preco;

public:
  Produto(int id, std::string nome, double preco);

  void setId(int id);
  int getId();
  void setNome(std::string nome);
  std::string getNome();
  void setPreco(double preco);
  double getPreco();
};

#endif // PRODUTO_H