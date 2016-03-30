#include "enteros.hpp"


entero_t::entero_t(){}

entero_t::entero_t(int num):
	valor(num){
}

entero_t::~entero_t(){}

entero_t operator+(const entero_t& n1, const entero_t& n2){
	
return entero_t(n1.valor + n2.valor);

}

ostream& operator << (ostream &os,const entero_t &p)
{
    os << p.valor << endl;
    return os;
}

bool operator>(const entero_t& n1, const entero_t& n2){

return (n1.valor>n2.valor);

}

bool operator<(const entero_t& n1, const entero_t& n2){

return (n1.valor<n2.valor);

}

bool operator==(const entero_t& n1, const entero_t& n2){

return (n1.valor==n2.valor);

}

	entero_t& entero_t::operator= (const entero_t& n2){
		valor=n2.valor;	
		return *this;
	}

	
entero_t operator-(const entero_t& n1, const entero_t& n2){

return entero_t(n1.valor - n2.valor);

}

entero_t operator*(const entero_t& n1, const entero_t& n2){

return entero_t(n1.valor * n2.valor);

}

entero_t operator/(const entero_t& n1, const entero_t& n2){

return entero_t(n1.valor / n2.valor);

}


istream& operator >> (istream &is, entero_t &p){
 	   is >> p.valor;
  	  return is;
	}