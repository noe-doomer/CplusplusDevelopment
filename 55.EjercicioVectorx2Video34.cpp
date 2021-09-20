// Ejercicio Hacer un programa que lea 5 números en un arreglo, los copie a otro arreglo multiplicados por 2 y muestre el segundo arreglo.
#include<iostream>
#include<conio.h>

using namespace std; 
int main(){
	int arreglo1[10] = {5,10,15,20,25}; 
	int arreglo2[10]; 
	int multi = 0; 
	
	cout<<"\t\t\tPrograma que toma el arreglo 1 y multiplica sus elementos por dos para mostrarlos en uno nuevo. \n"<<endl; 
	cout<<"El arreglo 1 es: 5,10,15,20,25 y el segundo con el producto 2 queda como: \n"<<endl; 
	
	for(int i=0; i<5; i++){
		arreglo1[i] *= 2; 
	}
	
	for(int i=0; i<5; i++){
		arreglo2[i] = arreglo1[i]; 
	}
	for(int i=0; i<5; i++){
		cout<<arreglo2[i]<<"\n"<<endl; 
	}
	
	return 0; 
	getch(); 
}
