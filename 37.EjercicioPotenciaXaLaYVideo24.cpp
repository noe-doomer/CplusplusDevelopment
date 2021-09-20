// Ejercicio Escriba un programa que calcule x^y, donde tanto x como y son enteros positivos, sin utilizar la función pow. Video 24
#include<iostream>
#include<conio.h>
using namespace std; 

int main(){
	long int x,y,potencia,multi; 
	
	cout<<"\t\tPrograma que calcula la X a la potencia Y"<<endl;
	cout<<"\n\nDigita el valor de la potencia y: ";
	cin>>y; 
	cout<<"\nDigita el valor de x: ";
	cin>>x; 
	
	for(potencia=1;potencia<=y; potencia++){
	
		multi*= x;
 }

	cout<<"\nEl resultado de la potencia es igual a: "<<multi; 
	getch();
	return 0; 
}

