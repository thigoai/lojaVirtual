#include "../include/Produto.h"

Produto::Produto(int id, std::string nome, double preco) {
  this->id = id;
  this->nome = nome;
  this->preco = preco;
}

void Produto::setId(int id) { this->id = id; }

int Produto::getId() { return this->id; }

void Produto::setNome(std::string nome) { this->nome = nome; }

std::string Produto::getNome() { return this->nome; }

void Produto::setPreco(double preco) { this->preco = preco; }

double Produto::getPreco() { return this->preco; }