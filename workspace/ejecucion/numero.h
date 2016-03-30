#include <cstdio>
#include <iostream>
#pragma once
using namespace std;

class numero
{
	public:

        //virtual const entero_t toEntero() const = 0;
        //virtual const racional toRacional() const =0;
        //virtual const real toReal() const = 0;
        //virtual const complex_t toComplejo() const = 0;
        virtual ostream& toStream(ostream& sout)const=0;
        virtual istream& fromStream(istream& sin)=0;
};
