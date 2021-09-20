// Ejercicio Arreglos: Crear un programa que defina un vector de numeros y calcule la suma de sus elementos Video 31 
#include<iostream>
#include<conio.h>
using namespace std; 

int main(){
	int arreglo[] = {1,2,3,4,5}; 
	int suma= 0; 
	
	for(int i=0; i<5; i++){
		suma += arreglo[i]; 
		
	}
	cout<<"\t\t\t--Programa que calcula la suma de un vector--\n"<<endl;
	cout<<"\nLa creacion del vector en sumatoria es: "<<suma<<endl; 
	
	getch();
	return 0; 
	
}
