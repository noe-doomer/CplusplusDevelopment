// Ejercicio  Hacer un programa para rellenar una matriz pidiendo al usuario el número de filas y columnas, Posteriormente mostrar la matriz en pantalla.
#include<iostream>
#include<conio.h>
using namespace std; 

int main(){
	int matriz[100][100]; 
	int filas, columnas; 
	
	cout<<"\t\t\tPrograma que almacena numeros en una matriz con filas y columnas. \n"; 
	cout<<"Digita el numero de filas: \n"; 
	cin>>filas; 
	cout<<"\nDigita el numero de columnas: \n"; 
	cin>>columnas; 
	
	for (int i=0; i<=filas; i++){
		for(int j=0; j<=columnas; j++){
			cout<<"\nDigita los numeros: ["<<i<<"] "<<"["<<j<<"]: "; 
			cin>>matriz[i][j]; 
			
		}
	}
	
	for (int i=0; i<=filas; i++){
		for(int j=0; j<=columnas; j++){
			cout<<matriz[i][j]; 
		}
		cout<<"\n";
	}
	
	return 0; 
	getch(); 
}
