// Ejercicio Hacer una matriz preguntando al usuario el numero de filas y columnas
//llenarla de números aleatorios, copiar el contenido a otra matriz y por último mostrarla en pantalla. video 38 
#include<iostream>
#include<conio.h>
using namespace std; 

int main(){
	int arreglo1[100][100], arreglo2[100][100]; 
	int filas, columnas, i ,j; 
	
	cout<<"\t\t\tPrograma que crea una matriz y la transfiere a otra. \n"<<endl; 
	cout<<"Digita el numero de filas: "<<endl; 
	cin>>filas; 
	cout<<"Digita el numero de columnas: "<<endl; 
	cin>>columnas;
	
		
	for(i=0; i<=filas; i++){
		for(j=0; j<=columnas; j++){
			
			cout<<"Digita los numeros: "<<endl; 
			cin>>arreglo1[i][j]; 
		}
			}
	
			for(i=0; i<=filas; i++){
			for(j=0; j<=columnas; j++){
			
			arreglo2[i][j] = arreglo1[i][j]; 
		}
			}
			cout<<"Matriz transferida queda: \n"; 
				for(i=0; i<=filas; i++){
				for(j=0; j<=columnas; j++){
				cout<<arreglo2[i][j]; 
		}
		cout<<"\n"; 
			}
			
}
