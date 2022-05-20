#pragma once

class cPilha {

	private:
		char* 	pilha;
		int 	topo; // aponta o limite da pilha
		int 	capacidadeMaxima;	

	public:

		cPilha();
		cPilha(int n);

		~cPilha();

		bool pilhaEVazia();

		bool pilhaECheia();

		void empilha(char n);

		char desempilha();

		void imprimirPilha();

};
