#include "nodo.h"
#include <cstdio>
#include <iostream>
#include "natural.h"
#include <exception>
#include "pila_excepciones.hpp"
#pragma once

using namespace std;

template <class TDATO>
class pila_t{
private:
    nodo_t<TDATO>* inicio_;
    nodo_t<TDATO>* fin_;
    int cont;
    
public:
    int get_size();
    pila_t();
    ~pila_t();

    bool empty ();

    void insert_empty(nodo_t<TDATO>* nodo);
    void push(TDATO dato);
    TDATO pop();
   
    void mostrar();
    void buscar(TDATO);
};




template <class TDATO>
pila_t<TDATO>::pila_t(void):
    inicio_(NULL),
    fin_(NULL),
    cont(0) {}

template <class TDATO>
pila_t<TDATO>::~pila_t(void){
    nodo_t<TDATO>* aux = inicio_;
    while (inicio_!=NULL){
        inicio_= inicio_ -> get_next();
        delete aux;
        aux = inicio_;
    }
}


template <class TDATO>
bool pila_t<TDATO>::empty (void){
    if (inicio_ == NULL)
        return true;
    else
        return false;
}

template <class TDATO>
void pila_t<TDATO>::insert_empty(nodo_t<TDATO>* nodo){
    inicio_ = nodo;
    fin_ = nodo;
}


template <class TDATO>
void pila_t<TDATO>::push(TDATO dato){
	
	if (cont > 100)
			throw stack_overflow_exception();
			
	nodo_t<TDATO>* aux;
	aux = new nodo_t<TDATO>(dato, NULL);
	
	if (!aux)
			throw bad_alloc();

    if (empty())
        insert_empty(aux);
    else{
    aux -> set_next(inicio_);
    inicio_ = aux;
    }
	cont++;
}


template <class TDATO>
TDATO pila_t<TDATO>::pop(void){
    
    if (empty())
			throw empty_stack_exception();
			
    if (inicio_==fin_){
        nodo_t<TDATO>* aux = inicio_;
        inicio_=NULL;
        fin_=NULL;
        return aux->get_valor();
    }

    else{
        nodo_t<TDATO>* aux = inicio_;
        inicio_ = inicio_ -> get_next();
        return aux->get_valor();
    }
}


template <class TDATO>
void pila_t<TDATO>::mostrar(void){
    nodo_t<TDATO>* aux = inicio_;
    cout << "Pila " << endl;
    while (aux != NULL){
        (aux -> get_valor())->toStream(cout);
	    cout << " ";
        aux = aux -> get_next();
    }
    cout << endl;
}


template <class TDATO>
void pila_t<TDATO>::buscar(TDATO x){
    bool encontrado = false;
    nodo_t<TDATO>* aux = inicio_;
    while (aux != NULL){
        if (aux -> get_valor() == x){
            cout << "se ha encontrado el valor" << endl;
            encontrado = true;
        }
            aux = aux -> get_next();
    }
    if ( encontrado == false)	cout << " No se ha encontrado el valor" << endl;
}

