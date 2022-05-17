#include<iostream>

#include "tadNoSimp.h"

class cFila	{ 

	private:
		cNoSimpEnc* inicio;    	// indica a primeira posicao da fila 
		cNoSimpEnc* fim;    	// indica a ultima posicao da fila 
  		int  		numElem;   	// Total de posicoes alocadas


	public:	
		cFila();

		~cFila();

		bool filaEVazia();

		bool enfileira(char c);

		char desenfileira();
		
		int tamanho();
};

