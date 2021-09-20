/*�Realice un programa que solicite al usuario que piense un n�mero entero entre el 1 y el 100. El programa debe generar un numero aleatorio en 
ese mismo rango[1-100],e indicarle al usuario si el numero que d�gito es menor o mayor 
al numero aleatorio, as� hasta que lo adivine. y por ultimo mostrarle el numero de intentos que le llevo.*/
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std; 

int main(){
	
	int numero, dato, contador=0;
	
	cout<<"\t\t\tPrograma que arroja un numero aleatorio [1-100] y el usuario debe adivinarlo."<<endl; 
	
	srand(time(NULL)); 
	dato = 1 + rand()%(100); 
	
	do{
		cout<<"Digita el numero que crees que salio [1-100]: "<<endl;
		cin>>numero; 
		
		if(numero<dato){
			cout<<"Digita un numero mayor. "<<endl; 
		}
		else if(numero > dato){
			cout<<"Digita un numero menor. "<<endl; 
		}
		contador++;
		
	}while(numero!= dato); 
	
	cout<<"Es el numero correcto. \n\n\n \t\tFELICIDADES \n"<<endl;
	cout<<"\n\nNumero de intentos: "<<contador<<"\n"<<endl; 
	system("pause"); 
	return 0; 
}
