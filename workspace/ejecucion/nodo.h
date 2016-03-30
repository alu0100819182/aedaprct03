#include <cstdio>
#include "natural.h"
#pragma once

template <class TDATO>
class nodo_t{
private:
        nodo_t<TDATO>* next_;
        TDATO dato_;

public:
	nodo_t(void);
    nodo_t(TDATO dato, nodo_t<TDATO>* next);
    ~nodo_t(void);
    void set_next(nodo_t<TDATO>* next);
    nodo_t<TDATO>* get_next(void);
    TDATO get_valor(void);
    void set_valor(TDATO x);
};



template <class TDATO>
nodo_t<TDATO>::nodo_t(){
}

template <class TDATO>
nodo_t<TDATO>::nodo_t(TDATO dato, nodo_t* next):
    dato_(dato),
    next_(next){} //


template <class TDATO>
nodo_t<TDATO>::~nodo_t(void){}


template <class TDATO>
void nodo_t<TDATO>::set_next(nodo_t* x){
    next_ = x;
}

template <class TDATO>
nodo_t<TDATO>* nodo_t<TDATO>::get_next(void){
    return next_;
}

template <class TDATO>
TDATO nodo_t<TDATO>::get_valor(void){
    return dato_;
}

template <class TDATO>
void nodo_t<TDATO>::set_valor(TDATO x){
    dato_ = x;
}
