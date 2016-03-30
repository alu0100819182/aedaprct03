#include "racional.h"
//#include "enteros.hpp"
 
 
racional::racional(const int & n, const int & d):
    num(n),
    den(d){
             normalizar();
}
 
       
racional::racional(const racional & r):
     
    num(r.num),
    den(r.den){}
 
 
int racional::numerador()const{     // retorna el campo numerador de un racional
 
             return num.valor;
}
 
       
int racional::denominador()const{     // retorna el campo denominador de un racional
 
             return den.valor;
}
 
 
 
int mcd(const int& a, const int& b){
 
int res=1;
    for(int i=1; i<= a; i++){
        if((a%i==0)&&(b%i==0))
        res=i;
 
        }
 
    return res;
 
 
}
 
int mcm(const entero_t& q, const entero_t& w){
 
    entero_t a(max(q.valor, w.valor));
 
    entero_t b(min(q.valor, w.valor));
 
    entero_t mcm1((a.valor/mcd(a.valor,b.valor))*b.valor);
 
    return mcm1.valor;
 
}
 
void racional::normalizar(){     // normalización de un racional
             // mueve el signo al numerador
             // hace que numerador y denominador no tengan divisor común
 
             int signo = 1;
 
             if (num.valor<0) {
                   signo=-1;
               num.valor = -num.valor;
                   }
 
             if (den < 0) {
                   signo = -signo;
           den.valor = -den.valor;
                   }
 
            // assert(den!=0);            // aserto para asegurar que el denominador no es cero
 
             int n = mcd(num.valor,den.valor);  // máximo común divisor
 
             // mueve el signo al numerador y divide por el mcd
 
             num.valor = signo*(num.valor/n);
         den.valor = den.valor/n;
 
}
 
racional & racional::operator=(const racional & der){     // copia los valores del lado derecho de la asignación
 
             num.valor=der.num.valor;
             den.valor=der.den.valor;
 
            // normalizar();
 
             return *this;
}
 
racional operator+(const racional & izq, const racional & der){
            // retorna la suma de dos números racionales
 
             racional result (izq.num.valor * der.den.valor + der.num.valor * izq.den.valor, izq.den.valor * der.den.valor);
 
             return result;
 
}
 
racional operator-(const racional & izq, const racional & der){
            // retorna la resta de dos números racionales
 
             racional result (izq.num.valor * der.den.valor - der.num.valor * izq.den.valor, izq.den.valor * der.den.valor);
 
             return result;
 
}
 
racional operator*(const racional & izq, const racional & der){
            // retorna la multiplicación de dos números racionales
 
             racional result (izq.num.valor * der.num.valor, izq.den.valor * der.den.valor);
 
             return result;
 
}
 
racional operator/(const racional & izq, const racional & der){
            // retorna la división de dos números racionales
 
             racional result (izq.num.valor * der.den.valor, izq.den.valor * der.num.valor);
 
             return result;
 
}
 
bool operator<(const racional& a, const racional& b){
 
    
    if ((a.num * b.den) < (a.den * b.num))  return true;
 
    return false;
 
}
 
bool operator>(const racional& a, const racional& b){

    //int aux=mcm(a.den, b.den);
    //entero_t x(aux);
 
    if ((a.num * b.den) > (a.den * b.num))   return true;
 
    return false;
 
}
 
 
bool operator==(const racional& a, const racional& b){
 
    if (a.num == b.num && b.den == a.den)
 
        return true;
 
    return false;
 
}
 
 
/*bool operator>(const racional & izq, const racional & der){
 
    double x_num = izq.num.valor;
    double x_den = izq.den.valor;
 
    double y_num = der.num.valor;
    double y_den = der.den.valor;
 
             if ((x_num/x_den)>(y_num/y_den)){
             return true;
        }
 
}
 
bool operator<(const racional & izq, const racional & der){
 
    double x_num = izq.num.valor;
    double x_den = izq.den.valor;
 
    double y_num = der.num.valor;
    double y_den = der.den.valor;
 
             if ((x_num/x_den)<(y_num/y_den)){
             return true;
        }
 
}
*/
 
 
ostream & operator<<(ostream & salida, const racional & r)
{
             // imprime un racional en un stream de salida
 
             salida << r.numerador() << '/' << r.denominador();
 
             return salida;
 
}
 
 
istream& operator >> (istream &is, racional & r){
 	   is >> r.num.valor; 
		int aux;
		is >> r.den.valor;
	aux=r.den.valor;
		if (aux==0){
	cout <<  "No puede existir un racional cuyo denominador es cero";
cout <<endl;
	assert(aux!=0);		
//return 0;		
}

 	  // is >> r.den.valor; 

  	  return is;
	}

/*int main (void){



numero* pN;
pN=new racional();

pN -> fromStream(cin);
pN -> toStream(cout);

cout <<endl;









}*/

