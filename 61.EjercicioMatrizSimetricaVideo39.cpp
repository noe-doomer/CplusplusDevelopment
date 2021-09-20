// Ejercicio: Desarrollar un programa que determine si una matriz es simétrica o no. Una matriz es simétrica 
// si es cuadrada y si es igual a su matriz transpuesta. Video 39 
#include<iostream>
#include<conio.h>
using namespace std; 

int main(){
	int matriz[100][100], i, j, filas, columnas; 
	char band = 'F'; 
	cout<<"\t\t\tPrograma que muestra si una matriz es simetrica. \n"; 
	cout<<"Digite el numero de filas: \n"; 
	cin>>filas; 
	cout<<"Digite el numero de columnas: \n"; 
	cin>>columnas; 
	
	for(i=0; i<=filas; i++){
		for(j=0; j<=columnas; j++){
			cout<<"Digite los numeros: "<<endl; 
			cin>>matriz[i][j]; 
			
		}
	}
	
	if(filas == columnas){
		for(i=0; i<=filas; i++){
		for(j=0; j<=columnas; j++){
			if(matriz[i][j] == matriz[j][i]){
				band = 'V'; 
			}
		}
	}
	}
	if(band == 'V'){
		cout<<"La matriz es simetrica por ser cuadrada y polaridad igual. "<<endl; 
	}else{
		cout<<"No es simetrica."<<endl; 
	}
	
	return 0; 
	getch(); 
	
}
