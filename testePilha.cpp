#include <iostream>

#include "tadPilha.h"

using namespace std;

// ***********************************************
// ***********************************************
// ***********************************************

int main() {

    cPilha 	p;
    char c = 65;    // letra A

    if (p.pilhaEVazia()) {
        cout << "A pilha alocada no endereco " << &p << " esta vazia!" << endl;
    } 

    cout << "Preenchendo pilha..." << endl;
    
    while (!p.pilhaECheia()) {
    	p.empilha(c);
        c++;
    }

    if (p.pilhaECheia()) {
        cout << "A pilha alocada no endereco " << &p << " esta cheia!" << endl;
    } 
    
    cout << "Imprimindo pilha..." << endl;
    p.imprimirPilha();

   cout << "============================================================" << endl;
   cout << "Esvaziando pilha..." << endl;

    while ( !p.pilhaEVazia() ) {
        c = p.desempilha(); 
    	std::cout << "( " << c << " ) ";
    }
    
    if (p.pilhaEVazia()) {
        cout << "A pilha alocada no endereco " << &p << " esta vazia!" << endl;
    } 

    std::cout << std::endl; 
    
}
