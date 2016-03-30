#include "natural.h"


natural_t::natural_t(){}

natural_t::natural_t(unsigned int num):
	valor(num){
}

natural_t::~natural_t(){}

natural_t operator+(const natural_t& n1, const natural_t& n2){
	
return natural_t(n1.valor + n2.valor);

}

	ostream& operator << (ostream &os,const natural_t &p){
  		os << p.valor << endl;
  		return os;
	}


	bool operator>(const natural_t& n1, const natural_t& n2){
		return (n1.valor>n2.valor);
	}

bool operator<(const natural_t& n1, const natural_t& n2){

return (n1.valor<n2.valor);

}

bool operator==(const natural_t& n1, const natural_t& n2){

return (n1.valor==n2.valor);

}


	natural_t& natural_t::operator= (const natural_t& n2){
		valor=n2.valor;	
		return *this;
	}



natural_t operator-(const natural_t& n1, const natural_t& n2){

if (n1<n2){
cout << "El resultado de la resta no es un número natural" << endl;
return 0;
}

return natural_t(n1.valor - n2.valor);

}

natural_t operator*(const natural_t& n1, const natural_t& n2){

return natural_t(n1.valor * n2.valor);

}

	natural_t operator/(const natural_t& n1, const natural_t& n2){
		return natural_t(n1.valor / n2.valor);
	}





	istream& operator >> (istream &is, natural_t &p){
 	   is >> p.valor;
  	  return is;
	}


/*int main (void){

//unsigned int aux;

numero* pN;
pN=new natural_t();

pN -> fromStream(cin);
pN -> toStream(cout);

cout <<endl;

//cout << "Introduce natural: ";







}*/
