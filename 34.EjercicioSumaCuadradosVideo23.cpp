// Ejercicio Ciclos o Bucles Realizar la suma de los cuadrados de los primeros 10 numeros que se introduzcan mayores que cero 
#include<iostream>
#include<conio.h>
using namespace std; 

int main(){
	int cuadrado, suma = 0; 
	
	cout<<"\t\t\tPrograma que suma los cuadrados de los 10 primeros numeros enteros. "<<endl;
	for(int i=0; i<=10; i++){
		cuadrado = i * i; 
		suma += cuadrado; 
	}
	
	cout<<"\nEl resultado de la suma es: "<<suma<<endl; 
	getch(); 
	return 0; 
	
}

