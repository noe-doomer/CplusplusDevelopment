/* Video 8 Ejercicio de menu Hacer un menú que considere las siguientes opciones:
  Caso 1: Cubo de un numero
  Caso 2: Numero par o impar
  Case 3: salir. */
#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std; 

int main(){
	int num,cubo;
	int opc;  
	
	cout<<"\t\t\t\tMenu de numeros con sus operaciones: "<<endl; 
	cout<<"1. Cubo de un numero. "<<endl; 
	cout<<"2. Numero par o impar."<<endl; 
	cout<<"3.Salir."<<endl; 
	cout<<"Digite la opcion: "<<endl; 
	cin>>opc; 
	switch(opc)
	{
		case 1: 
		cout<<"El cubo de un numero."<<endl; 
		cout<<"Digite el numero: "<<endl; 
		cin>>num; 
		cubo = pow(num,3); 
		cout<<"El cubo del numero "<<num<<" es: "<<cubo; 
		break;
		case 2: 
		cout<<"Numero par o impar."<<endl; 
		cout<<"Digite el numero: "<<endl; 
		cin>>num;
		
		if(num%2 == 0){
			cout<<"El numero "<<num<<" es par."<<endl; 
	
		}else{
			cout<<"El numero "<<num<<" es impar."<<endl; 
			
		} break;
		case 3: break; 
	}
}  
