#pragma once

class cPilha {

	private:
		char* 	pilha;
		int 	maxElems;	
		int 	topo;

	public:

		cPilha();
		cPilha(int n);

		~cPilha();

		bool pilhaEVazia();

		bool pilhaECheia();

		void empilha(char n);

		char desempilha();
};
