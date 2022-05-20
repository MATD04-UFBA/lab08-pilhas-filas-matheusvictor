#include <iostream>

#include "tadPilha.h"

#define NUMERO_MINIMO_ELEMENTOS 6

// ***********************************************
// ******                                   ******
// ***********************************************

cPilha::cPilha(int numeroElementos) {
    
    pilha = new char[numeroElementos];

	if (pilha == NULL) {
		this->topo = -1;
	} else {
		this->topo = 0;
	}

	this->capacidadeMaxima = numeroElementos;
	
	std::cout << std::endl;
	std::cout << "topo da pilha: " << topo << std::endl;
	std::cout << "pilha alocada em: " << &pilha << std::endl;
	std::cout << "capacidade maxima da pilha: " << this->capacidadeMaxima << std::endl;
	std::cout << std::endl;
}

// ***********************************************
// ******                                   ******
// ***********************************************

cPilha::cPilha() {

	pilha = new char[NUMERO_MINIMO_ELEMENTOS];

	if (pilha == NULL) {
		this->topo = -1;
	} else {
		this->topo = 0;
	}

	/*
	int i = 0;
	while (!this->pilhaECheia() && i < (NUMERO_MINIMO_ELEMENTOS - 1)) {
		this->empilha(' ');
		i++;
	}
	*/

	this->capacidadeMaxima = NUMERO_MINIMO_ELEMENTOS;

	std::cout << std::endl;
	std::cout << "topo da pilha: " << topo << std::endl;
	std::cout << "pilha alocada em: " << &pilha << std::endl;
	std::cout << "capacidade maxima da pilha: " << this->capacidadeMaxima << std::endl;
	std::cout << std::endl;

}

// ***********************************************
// ******                                   ******
// ***********************************************

cPilha::~cPilha() {
	
	delete[] pilha;
	pilha = NULL;

	this->topo = 0;
	this->capacidadeMaxima = 0;

}

// ***********************************************
// ******                                   ******
// ***********************************************

bool cPilha::pilhaEVazia() {
	return this->topo == 0;
}

// ***********************************************
// ******                                   ******
// ***********************************************

bool cPilha::pilhaECheia() {
	return this->topo == this->capacidadeMaxima - 1;
}

// ***********************************************
// ******                                   ******
// ***********************************************

void cPilha::empilha(char c) {

	if (this->topo < (this->capacidadeMaxima - 1) && pilha[this->topo] != ' ') {
		pilha[this->topo] = c;
		this->topo++;
  	} else {
		  this->pilhaECheia();
	}

}

// ***********************************************
// ******                                   ******
// ***********************************************

char cPilha::desempilha() {
	
	if (this->topo == 0) {
        return ' ';
    } else {
        char conteudoRetirado = pilha[this->topo];
		pilha[this->topo] = ' ';
		this->topo--;
        return conteudoRetirado;
    }

}

void cPilha::imprimirPilha() {
	
	std::cout << "Pilha com " << (this->capacidadeMaxima - 1) << " posicoes alocadas, sendo " 
	<< this->topo << " ocupadas:" << std::endl;

	for (int i = 0 ; i < (this->capacidadeMaxima - 1) ; i++) {
		std::cout << "P [ " << i << " ] =  " << pilha[i] << std::endl;
	}

}
