#include <cstdio>
#include <iostream>
#include "reales.h"
#include "numero.h"
#pragma once

using namespace std;

class complex_t: public numero
{

public:

	real r_;
	real i_;

  public:


		complex_t(float num1=0.0, float num2=0.0);
        complex_t(const complex_t &);
       ~complex_t (void);
        complex_t & operator=(const complex_t &);
		friend complex_t operator+(const complex_t& n1, const complex_t& n2);
		friend complex_t operator-(const complex_t& n1, const complex_t& n2);
		friend complex_t operator*(const complex_t& n1, const complex_t& n2);
		friend complex_t operator/(const complex_t& n1, const complex_t& n2);
		friend bool operator==(const complex_t& n1, const complex_t& n2);
		friend ostream& operator << (ostream &o,const complex_t &p);
		friend istream& operator >> (istream &is, complex_t &p);

		virtual ostream& toStream(ostream& sout)const{
			sout << r_ << " + " << i_ << "i";
			return sout;	
		}

		virtual istream& fromStream(istream& sin){
			cout << "Introduce parte real y parte imaginaria: ";
			sin >> r_ >> i_;
			return sin;
		}
};
