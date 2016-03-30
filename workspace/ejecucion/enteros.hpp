#include <cstdio>
#include <iostream>
#include "numero.h"
#pragma once
using namespace std;

class entero_t: public numero{

public:

	int valor;
	entero_t();
	entero_t(int num);
    ~entero_t (void);

	friend entero_t operator+(const entero_t& n1, const entero_t& n2);
	friend entero_t operator-(const entero_t& n1, const entero_t& n2);
	friend entero_t operator*(const entero_t& n1, const entero_t& n2);
	friend entero_t operator/(const entero_t& n1, const entero_t& n2);

	entero_t& operator=(const entero_t& n2);

	friend bool operator>(const entero_t& n1, const entero_t& n2);
	friend bool operator<(const entero_t& n1, const entero_t& n2);
	friend bool operator==(const entero_t& n1, const entero_t& n2);

	//const entero_t toEntero() const;
	//const racional toRacional() const;
	//const real toReal() const;
	//const complex_t toComplejo() const;
	
	friend ostream& operator << (ostream &os,const entero_t &p);
	friend istream& operator >> (istream &is, entero_t &p);
	
	virtual ostream& toStream(ostream& sout)const{
		sout << valor;
		return sout;	
	}

	virtual istream& fromStream(istream& sin){
		double aux_double, aux;
		int aux_int;
		cout << "Introduce número entero: ";
		try{
			sin >> aux_double;
			aux_int=aux_double;
			aux=aux_int-aux_double;
				if(aux<0) throw "El número introducido no es válido";
				else valor=aux_double;
		}
		catch(const char *str){
		cout << str << endl;
		}
	return sin;
	}
};


