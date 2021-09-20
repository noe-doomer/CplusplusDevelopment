//Ejercicio  Realiza un programa que defina una matriz de 3x3 y escriba un ciclo para que muestre la diagonal principal de la matriz. Video 36
#include<iostream>
#include<conio.h>
using namespace std; 

int main(){
	int arreglo[50][50], filas, columnas; 
	
	cout<<"\t\t\tPrograma que muestra la diagonal de una matriz.\n"<<endl; 
	cout<<"Digita el numero de columnas: "<<endl; 
	cin>>columnas; 
	cout<<"\nDigita el numero de filas: "<<endl; 
	cin>>filas; 
	
	for(int i=1; i<= filas; i++){
	for(int j=1; j<= columnas; j++){
		cout<<"\nDigita los numeros de la matriz; "<<endl; 
		cin>>arreglo[i][j]; 
		
	}
	}
	cout<<"\n";
		
		cout<<arreglo[1][1];
		cout<<"\n\t"<<arreglo[2][2];
		cout<<"\n\t\t"<<arreglo[3][3];

	
	cout<<"\n";
	
	
}
