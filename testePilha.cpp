#include <iostream>

#include "tadPilha.h"

// ***********************************************
// ***********************************************
// ***********************************************

int main() {

cPilha 	p(26);
    
    char c = 65;    // letra A

    while ( !p.pilhaECheia() ) {

        std::cout << "[ " << c << " ] "; 
    	p.empilha(c);
        c++;
    	}
    std::cout << std::endl; 
 
    while ( !p.pilhaEVazia() ) {

        c = p.desempilha(); 
    	
        std::cout << "( " << c << " ) ";
        }
    std::cout << std::endl; 
}
