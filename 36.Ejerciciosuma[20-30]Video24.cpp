/* Ejercicio 5: Escriba un programa que lea valores enteros hasta que se introduzca un valor en el rango [20-30] o 
se introduzca el valor 0. El programa debe entregar la suma de los valores mayores a 0 introducidos. */
#include<iostream>
#include<conio.h>

using namespace std; 

int main(){
	int suma = 0, numero, i; 
	
	cout<<"\t\tPrograma que suma valores fuera del rango [20-30] o mayores a cero y muestra el total en pantalla."<<endl;
	
	do {
		cout<<"\nDigita el numero: "<<endl; 
		cin>>numero; 
	
	if((numero!=0) && (numero<20) || (numero>30)){
		i++; 
		suma = suma + numero; 
	}
	else if (numero>= 20 && numero<=30){
		cout<<"No se cuenta."<<endl; 
	}
		else{
		cout<<"No se cuenta."<<endl; 
	}
		
	}while( (numero!=0) && (numero<20) || (numero>30));
	cout<<"El total de la suma con excepciones es: "<<suma<<endl; 
	
	getch();
	return 0; 
}
