#include <iostream>

#include "tadPilha.h"

#define NUMERO_MINIMO_ELEMENTOS 6

// ***********************************************
// ******                                   ******
// ***********************************************

cPilha::cPilha(int numeroElementos) {
    
    pilha = new char[numeroElementos];

	if (pilha == NULL) {
		topo = -1;
	} else {
		this->topo = 0;
	}

	capacidadeMaxima = numeroElementos;
	
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
		topo = -1;
	} else {
		this->topo = 0;
	}

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
}

// ***********************************************
// ******                                   ******
// ***********************************************

bool cPilha::pilhaEVazia() {
	return topo == 0;
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

	if (topo >= (capacidadeMaxima - 1)) {
		std::cout << "Pilha cheia!";
  	} else {
        pilha[topo] = c;
		topo++;
        std::cout << " inserido na pilha\n";
    }

}

// ***********************************************
// ******                                   ******
// ***********************************************

char cPilha::desempilha() {

    return ' ';
}
