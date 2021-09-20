//Ejercicio: Escribe un programa que defina un vector de números y calcule la multiplicación acumulada de sus elementos. Video 31
#include<iostream>
#include<conio.h>
using namespace std; 

int main(){
	
	int numeros[] = {1,5,10,15,20}; 
	long int producto = 1; 
	
	cout<<"\t\t\tPrograma que calcula el producto de todo el vector\n"<<endl; 
	for(int i=0; i<5; i++){
		producto = producto * numeros[i]; 
		
	}
	
	cout<<"\nEl producto de todo el vector es: "<<producto<<endl; 
	
	getch();
	return 0; 
}
