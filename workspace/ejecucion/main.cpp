#include "nodo.h"
#include <cstdio>
#include <iostream>
#include "natural.h"
#include "numero.h"
#include "pila_nodo.h"
#include "enteros.hpp"
#include "reales.h"
#include "racional.h"
#include "complex.h"
#include "pila_excepciones.hpp"
#include "vector_t.h"

using namespace std;

int main (void){

    pila_t<numero*> pila_;
    numero* N;
    int r;
    vector_t<numero*> a(10);
    int cont = 0;
    
    cout << endl;
    cout << "Práctica 3 Almacenar en pila y  cola" << endl;
    
    do{
        
        cout << "Introducir en pila y cola número tipo:" << endl;
        cout << endl;
        cout << " 1. Natural" << endl;
        cout << " 2. Entero" << endl;
        cout << " 3. Real " << endl;
        cout << " 4. Racional" << endl;
        cout << " 5. Complejo" << endl;
        cout << " 6. Mostrar pila y cola" << endl;
        cout << " 7. Extraer elemento de la pila" << endl;
        cout << " 8. FINALIZAR " << endl << endl;
        cout << " Introduzca la acción que desee: ";
        cin >> r;
        
    switch(r){
                
            case 1:
	        try{
		        N=new natural_t();
	        }
	        catch(std::bad_alloc&) {
     	        cout << "Memoria insuficiente" << endl;
   		    }
   		    
            N->fromStream(cin);

		    try {
                pila_.push(N);
                cout << endl;
                a[cont] = N; 
	            cont++;
            }
            catch (exception& e){
		            cout << e.what() << endl;
		            cout << endl;
	        }
            cout << " - - - - - - - - - - - - - - - - - - - - " << endl;
		    cout << endl;
            break;
                
            case 2:
	        try{
		        N=new entero_t();
	        }
	        catch(std::bad_alloc&) {
      	        cout << "Memoria insuficiente" << endl;
   		    }
            N->fromStream(cin);

		     try {
                pila_.push(N);
                cout << endl;
            }
            catch (exception& e){
		            cout << e.what() << endl;
		            cout << endl;
	        }
	        
	        try {
	            a[cont] = N;  
	            cont++;
	        }
	        catch (exception& e){
		            cout << e.what() << endl;
		            cout << endl;
	        }
	        cout << " - - - - - - - - - - - - - - - - - - - - " << endl;
            cout << endl;
		    break;
                
            case 3:
	        try{
		        N=new real();
	        }
	        catch(std::bad_alloc&) {
     	        cout << "Memoria insuficiente" << endl;
  		    }
            N->fromStream(cin);
             try {
                pila_.push(N);
                cout << endl;
            }
            catch (exception& e){
		            cout << e.what() << endl;
		            cout << endl;
	        }
	        
	        try {
	            a[cont] = N;  
	            cont++;
	        }
	        catch (exception& e){
		            cout << e.what() << endl;
		            cout << endl;
	        }
	        cout << " - - - - - - - - - - - - - - - - - - - - " << endl;
            cout << endl;
            break;
                
            case 4:
	        try{
		        N=new racional();
	        }
	        catch(std::bad_alloc&) {
      	        cout << "Memoria insuficiente" << endl;
   		    }
            N->fromStream(cin);
             try {
                pila_.push(N);
                cout << endl;
            }
            catch (exception& e){
		            cout << e.what() << endl;
		            cout << endl;
	        }
	        
	        try {
	            a[cont] = N;  
	            cont++;
	        }
	        catch (exception& e){
		            cout << e.what() << endl;
		            cout << endl;
	        }
	        cout << " - - - - - - - - - - - - - - - - - - - - " << endl;
            break;
                
            case 5:
	        try{
		        N=new complex_t();
	        }
	        catch(std::bad_alloc&) {
      		    cout << "Memoria insuficiente" << endl;
   		    }
            N->fromStream(cin);
            try {
                pila_.push(N);
                cout << endl;
            }
            catch (exception& e){
		            cout << e.what() << endl;
		            cout << endl;
	        }
	        
	        try {
	            a[cont] = N;  
	            cont++;
	        }
	        catch (exception& e){
		            cout << e.what() << endl;
		            cout << endl;
	        }
	        cout << " - - - - - - - - - - - - - - - - - - - - " << endl;
		    break;

 	        case 6:
            pila_.mostrar();
            cout << "Cola " << endl;
            for(int i=0; i<=cont-1; i++)
            {
                 a[i]->toStream(cout);
                 cout << " ";
            }
            cont = 0;
            cout << endl;
            cout << " - - - - - - - - - - - - - - - - - - - - " << endl;
		    break;

	        case 7:
	            try{
                    (pila_.pop())->toStream(cout);
    		        cout << endl;
	            }
	            catch (exception& e){
		            cout << e.what() << endl;
		            cout << endl;
	            }
	        cout << " - - - - - - - - - - - - - - - - - - - - " << endl;
		    break;

	        case 8:
            cout << "Finalizando" << endl;
            cout << " - - - - - - - - - - - - - - - - - - - - " << endl;
	    	break;
                
            default:
            cout << endl;
            cout << "Acción incorrecta. Teclee otra opción ";
            cout << " - - - - - - - - - - - - - - - - - - - - " << endl;
        }
        
        }while(r!= 8);
        cout << endl;
        
}

