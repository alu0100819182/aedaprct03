#include <cstdio>
#include <iostream>
#include "numero.h"
#pragma once

using namespace std;


class real: public numero{



	public:

	float valor;
	real();
	real(float num);
	real(const real& r); //constructor de copia para asignación
       	~real (void);

	friend real operator+(const real& n1, const real& n2);
	friend real operator-(const real& n1, const real& n2);
	friend real operator*(const real& n1, const real& n2);
	friend real operator/(const real& n1, const real& n2);

	real& operator=(const real& n2);

	friend bool operator>(const real& n1, const real& n2);
	friend bool operator<(const real& n1, const real& n2);
	friend bool operator==(const real& n1, const real& n2);

	friend ostream& operator<< (ostream &os,const real &p);
	friend istream& operator>> (istream &is, real &p);

	virtual ostream& toStream(ostream& sout)const{
		sout << valor;
		return sout;	
	}

	virtual istream& fromStream(istream& sin){
	cout << "Introduce un número real: ";
	sin >> valor;

	return sin;

	}
};













