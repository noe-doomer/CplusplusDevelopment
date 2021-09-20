// Ejercicio Realice un programa que calcule la suma de dos matrices cuadradas de 3x3.video 38
#include<iostream>
#include<conio.h>
using namespace std; 

int main(){
	int matriz1[3][3],matriz2[3][3],matrizsuma[3][3]; 
	int i,j; 
	
	cout<<"\t\t\tPrograma que toma dos matrices 3x3 y las suma. \n"<<endl; 
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			cout<<"Digita los numeros de la matriz 1: "<<endl; 
			cin>>matriz1[i][j]; 
		}
	}
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			cout<<"Digita los numeros de la matriz 2: "<<endl; 
			cin>>matriz2[i][j]; 
		}
	}
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
		matrizsuma[i][j] =	matriz1[i][j] + matriz2[i][j]; 
			
		}
	}
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
		cout<<" "<<matrizsuma[i][j]; 
		}
		cout<<"\n"; 
	}
	getch(); 
	return 0;
}
