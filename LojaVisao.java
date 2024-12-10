package br.ufrn.imd.thiago.visao;

import br.ufrn.imd.thiago.modelo.Catalogo;
import br.ufrn.imd.thiago.modelo.Pedido;
import br.ufrn.imd.thiago.modelo.Produto;

public class LojaVisao {
    public static void main(String[] args) {
        // Criando o catálogo de produtos
        Catalogo catalogo = new Catalogo();
        catalogo.adicionarProduto(new Produto(1, "Celular", 1500.00f));
        catalogo.adicionarProduto(new Produto(2, "Notebook", 3500.00f));
        catalogo.adicionarProduto(new Produto(3, "Tablet", 1200.00f));

        // Listando os produtos do catálogo
        System.out.println("Produtos no catálogo:");
        catalogo.listarProdutos();

        // Criando um pedido para um cliente
        Pedido pedido = new Pedido("Thiago Silva");

        // Adicionando produtos ao pedido
        Produto produto1 = catalogo.buscarPorID(1); // Buscando pelo ID no catálogo
        Produto produto2 = catalogo.buscarPorID(3);

        if (produto1 != null) {
            pedido.adicionarProduto(produto1);
        }
        if (produto2 != null) {
            pedido.adicionarProduto(produto2);
        }

        // Exibindo os produtos no pedido
        System.out.println("\nProdutos no pedido de " + pedido.getNomeCliente() + ":");
        pedido.listarProdutos();

        // Calculando o total do pedido
        System.out.println("\nTotal do pedido: R$ " + pedido.calcularTotal());
    }
}

