// Ejercicio: Realice un programa que lea una matriz de 3x3 y cree su matriz traspuesta. 
// La matriz traspuesta es aquella en la que la columna i era la fila i de la matriz original. Video 38
#include<iostream>
#include<conio.h>
using namespace std; 

int main(){
	int matriz1[3][3]; 
	int filas,columnas,i,j; 
	
	cout<<"\t\tPrograma que genera una matriz y la vuelve transpuesta. \n\n"; 
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			cout<<"Digita los valores de la matriz simple: "<<endl; cin>>matriz1[i][j]; 
		}
	}
	cout<<"Matriz simple: \n"; 
		for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			cout<<matriz1[i][j]; 
		}
		cout<<"\n";
	}
	cout<<"\nMatriz transpuesta: \n";
		for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			cout<<matriz1[j][i]; 
		}
		cout<<"\n";
	}
	
	getch(); 
	return 0;
}
