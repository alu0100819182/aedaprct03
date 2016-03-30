#include <cstdio>
#include <iostream>
#include "numero.h"
#pragma once
using namespace std;

class natural_t: public numero{

public:

	unsigned int valor;

public:

	natural_t();
	natural_t(unsigned int num);
    ~natural_t (void);

	friend natural_t operator+(const natural_t& n1, const natural_t& n2);
	friend natural_t operator-(const natural_t& n1, const natural_t& n2);
	friend natural_t operator*(const natural_t& n1, const natural_t& n2);
	friend natural_t operator/(const natural_t& n1, const natural_t& n2);

	natural_t& operator=(const natural_t& n2);

	friend bool operator>(const natural_t& n1, const natural_t& n2);
	friend bool operator<(const natural_t& n1, const natural_t& n2);
	friend bool operator==(const natural_t& n1, const natural_t& n2);

	friend ostream& operator << (ostream &os,const natural_t &p);
	friend istream& operator >> (istream &is, natural_t &p);
	
	//const entero_t toEntero() const;
	//const racional toRacional() const;
	//const real toReal() const;
	//const complex_t toComplejo() const;


virtual ostream& toStream(ostream& sout)const{
		sout << valor;
		return sout;	
	}


virtual istream& fromStream(istream& sin){
cout << "Introduce un número natural: ";
	try{
	int aux;
	sin >> aux;
   if(aux<0) throw "El número introducido no es válido";
	else{
		valor=aux;
   }
}


catch(const char *str){
 cout << str << endl;
}

return sin;

}


};


