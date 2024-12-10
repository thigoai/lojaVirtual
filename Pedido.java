package br.ufrn.imd.thiago.modelo;

import java.util.ArrayList;

public class Pedido {
	
	private String nomeCliente;
	private ArrayList<Produto> produtosPedidos;
	
	public Pedido(String nomeCliente) {
		this.nomeCliente = nomeCliente;
		produtosPedidos = new ArrayList<Produto> ();
	}
	
	public String getNomeCliente() {
		return nomeCliente;
	}



	public void setNomeCliente(String nomeCliente) {
		this.nomeCliente = nomeCliente;
	}



	public void adicionarProduto(Produto p) {
		produtosPedidos.add(p);
	}
	

	public void listarProdutos() {
		for (Produto p : produtosPedidos) {
			System.out.println(p.toString());
		}
	}
	
	public float calcularTotal(){
		float total = 0;
		for (Produto p : produtosPedidos) {
			total += p.getPreco();
		}
		return total;
	}

}
