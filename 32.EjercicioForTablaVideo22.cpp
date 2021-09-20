// Ejercicio ciclo FOR pedir un numero al usuario del 1 al 10 y con ese numero aparecer su tabla de multiplicar
#include<iostream>
#include<stdlib.h>
using namespace std; 

int main(){
	int numero; 
	
	cout<<"\t\t\t\tPrograma que muestra tabla de multiplicar."<<endl;
	cout<<"\n\nDigita el numero que quieras ver su tabla: "<<endl; 
	cin>>numero; 
	cout<<"\nElegiste la tabla del "<<numero; 
	for(int i =0; i<=20; i++){
		
		cout<<numero<<" * "<<i<<" = "<<numero*i<<endl; 

	}
	
	system("pause"); 
	return 0; 
	
}
