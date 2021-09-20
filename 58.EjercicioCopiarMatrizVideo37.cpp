// Ejercicio Hacer una matriz de tipo entera de 2 * 2, llenarla de números y luego copiar todo su contenido hacia otra matriz.Video 37 
#include<iostream>
#include<conio.h>
using namespace std; 

int main(){
	
	int numeros[2][2] = {{1,2} , {3,4}};
	int matriz2[2][2],i,j; 
	
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			matriz2[i][j] = numeros[i][j]; 
		}
	}
	
	cout<<"\t\t\tMatriz 2 copiada queda como: \n"<<endl; 
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			cout<<matriz2[i][j]; 
		}
		cout<<"\n"; 
	}
	getch(); 
	return 0;
}
