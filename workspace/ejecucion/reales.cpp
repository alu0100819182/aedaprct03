#include "reales.h"

real::real(){}

real::real(float num):
	valor(num){
}

real::real(const real& r){

valor = r.valor;

}

real::~real(){}

real operator+(const real& n1, const real& n2){
	
return real(n1.valor + n2.valor);

}

ostream& operator << (ostream &os,const real &p){
    os << p.valor;
    return os;
}


istream& operator>> (istream &is, real &p){
	is >> p.valor;
	return is;
	
}


bool operator>(const real& n1, const real& n2){

return (n1.valor>n2.valor);

}

bool operator<(const real& n1, const real& n2){

return (n1.valor<n2.valor);

}

bool operator==(const real& n1, const real& n2){

return (n1.valor==n2.valor);

}

real& real::operator=(const real& n2){
	valor=n2.valor;

}

real operator-(const real& n1, const real& n2){

return real(n1.valor - n2.valor);

}

real operator*(const real& n1, const real& n2){

return real(n1.valor * n2.valor);

}

real operator/(const real& n1, const real& n2){

return real(n1.valor / n2.valor);

}
