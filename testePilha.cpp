#include <iostream>

#include "tadPilha.h"

using namespace std;

// ***********************************************
// ***********************************************
// ***********************************************

int main() {

    cPilha 	p;
    char c = 65;    // letra A

    cout << p.pilhaEVazia() << endl;

    while (!p.pilhaECheia()) {
        std::cout << "[ " << c << " ] "; 
    	p.empilha(c);
        c++;
    }
    
    cout << p.pilhaEVazia() << endl;
    cout << p.pilhaECheia() << endl;

    /*
    while ( !p.pilhaECheia() ) {
        std::cout << "[ " << c << " ] "; 
    	p.empilha(c);
        c++;
    }
    */
    
    /*
    while ( !p.pilhaEVazia() ) {

        c = p.desempilha(); 
    	
        std::cout << "( " << c << " ) ";
        }
    std::cout << std::endl; 
    */
}
