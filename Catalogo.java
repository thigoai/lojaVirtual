package br.ufrn.imd.thiago.modelo;

import java.util.ArrayList;

public class Catalogo {

	private ArrayList<Produto> produtos;

	public Catalogo() {
		produtos = new ArrayList<Produto> ();
	}
	
	public void adicionarProduto(Produto p) {
		produtos.add(p);
	}
	

	public void listarProdutos() {
		for (Produto p : produtos) {
			System.out.println(p.toString());
		}
	}
	
	public Produto buscarPorID(int id) {
		for (Produto p : produtos) {
			if(p.getId() == id) {
				return p;
			}
		}
		System.out.println("Produto com ID " + id + " não encontrado.");
		return null;
	}
	
	
	
	
	
	
}
