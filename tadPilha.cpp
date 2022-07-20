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

	this->capacidadeMaxima = (numeroElementos - 1);
	
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

	this->capacidadeMaxima = (NUMERO_MINIMO_ELEMENTOS - 1);

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
	return this->topo == this->capacidadeMaxima;
}

// ***********************************************
// ******                                   ******
// ***********************************************

void cPilha::empilha(char c) {

	if (this->topo <= this->capacidadeMaxima  && pilha[this->topo] != ' ') {
		std::cout << "O topo da pilha esta em: " << this->topo << std::endl;
		pilha[++this->topo] = c;
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
		std::cout << "Topo: " << this->topo << ". ";
        char conteudoRetirado = pilha[this->topo--];	
		std::cout << conteudoRetirado << " foi removido. O topo da pilha esta em: " <<  this->topo << std::endl;
        return conteudoRetirado;
    }

}

void cPilha::imprimirPilha() {
	
	std::cout << "Pilha com " << this->capacidadeMaxima << " posicoes alocadas, sendo " 
	<< this->topo << " ocupadas:" << std::endl;

	for (int i = 0 ; i < this->capacidadeMaxima ; i++) {
		std::cout << "P [ " << i << " ] =  " << pilha[i] << std::endl;
	}

}
