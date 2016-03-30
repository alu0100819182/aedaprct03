#include <cstdio>
#include <iostream>
#include <assert.h>
#include "enteros.hpp"

using namespace std;

 class racional: public numero {

      private:

             //área de datos

             entero_t num;
             entero_t den;

             //operaciones internas

             void normalizar();

      public:

             //constructores

             racional(const int & n=0, const int & d=1);

             racional(const racional &);

             //observadores

             int numerador() const;

             int denominador() const;

             //operadores de asignación
	     friend int mcd(const int& a, const int& b);
	     friend int mcm(const entero_t& q, const entero_t& w);

             racional& operator=(const racional &);

             friend racional operator+(const racional& izq, const racional& der);
             friend racional operator-(const racional& izq, const racional& der);
	     friend racional operator*(const racional& izq, const racional& der);
	     friend racional operator/(const racional& izq, const racional& der);

	     friend bool operator>(const racional& a, const racional& b);
	     friend bool operator<(const racional& a, const racional& b);
	     friend bool operator==(const racional& a, const racional& b);

	     friend ostream& operator<<(ostream& salida, const racional& r);
	     friend istream& operator>>(istream& is, racional& p);

virtual ostream& toStream(ostream& sout)const{
		sout << num.valor << "/" << den.valor;
		return sout;	
	}

	virtual istream& fromStream(istream& sin){
	cout << "Introduce numerador y denominador: ";
	entero_t aux;
try{
	sin >> num.valor >> aux.valor;
	if(aux.valor==0) throw "No se admiten divisiones por 0";
	else den.valor=aux.valor;
	//cout << "Introduce den pls: ";
	//sin >> den.valor;
	
}
catch(const char *str){
	cout << str << endl;
}
	return sin;

	}

      };
