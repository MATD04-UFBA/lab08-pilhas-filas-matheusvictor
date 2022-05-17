/* Classe cNoSimpEnc */ 

#pragma once

#include<iostream>

class cNoSimpEnc {
  private: 
    char dado;
    cNoSimpEnc* prox;

  public:
  	cNoSimpEnc();
    cNoSimpEnc(char c);
    
  	~cNoSimpEnc();

  	void         setDado(char c);
  	void         setProx(cNoSimpEnc* p);
  	char         getDado();
  	cNoSimpEnc*  getProx();
};
