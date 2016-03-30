#include "complex.h"


complex_t::complex_t(float num1, float num2):
	r_(num1),
	i_(num2){
}

complex_t::complex_t(const complex_t & r): 
	
	r_(r.r_.valor), 
	i_(r.i_.valor){}

complex_t::~complex_t(){}

complex_t operator+(const complex_t& n1, const complex_t& n2){
	
return complex_t(n1.r_.valor + n2.r_.valor, n1.i_.valor + n2.i_.valor );

}

ostream& operator << (ostream &o,const complex_t &p)
{
    o << p.r_.valor << " + " << p.i_.valor << "i";
    return o;
}


bool operator==(const complex_t& n1, const complex_t& n2){

return (n1.r_.valor==n2.r_.valor&&n1.i_.valor==n2.i_.valor);

}


complex_t operator-(const complex_t& n1, const complex_t& n2){

return complex_t(n1.r_.valor - n2.r_.valor, n1.i_.valor - n2.i_.valor);

}

complex_t operator*(const complex_t& n1, const complex_t& n2){

return complex_t(n1.r_.valor * n2.r_.valor - n1.i_.valor * n2.i_.valor, n1.r_.valor * n2.i_.valor + n1.i_.valor * n2.r_.valor);


}

complex_t operator/(const complex_t& a, const complex_t& b){

float aux1=0.0, aux2=0.0;

aux1=(a.r_.valor*b.r_.valor+a.i_.valor*b.i_.valor)/((b.r_.valor*b.r_.valor) + (b.i_.valor*b.i_.valor));

aux2=(a.i_.valor*b.r_.valor-a.r_.valor*b.i_.valor)/((b.r_.valor*b.r_.valor) + (b.i_.valor*b.i_.valor));


return complex_t(aux1, aux2);

}





complex_t & complex_t::operator=(const complex_t & a){     // copia los valores del lado derecho de la asignación
            
	   r_.valor=a.r_.valor;
	   i_.valor=a.i_.valor;

             return *this;
}



istream& operator>>(istream& is, complex_t& v) {

  is >> v.r_.valor;
  is >> v.i_.valor;
  

  return is;
}




