#include <iostream>

#include "tadFila.h"

// ***********************************************
// ***********************************************
// ***********************************************

int main() {

cFila 	f;
    
    char k = 'A';

    while (k <= 'Z') {
        if (!f.enfileira(k) ) {
            std::cout << "ERROR enfileirando" << std::endl;
            exit(-1);
            }	
        std::cout << "[ " << k << " ] "; 
    	k++;
    	}

    std::cout << std::endl; 
        	
    while ( !f.filaEVazia()) {
        k = f.desenfileira(); 
        std::cout << "( " << k << " ) ";
        }
    std::cout << std::endl; 
 }

    

