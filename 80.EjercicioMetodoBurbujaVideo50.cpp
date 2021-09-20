//Ejercicio Metodo burbuja con ordenamiento de numeros Video 50 
#include<iostream>
#include<conio.h>
using namespace std; 

int main(){
	int numeros[] = {1,4,3,2,5}; 
	int i,j,aux;
	
	cout<<"Programa que ordena numeros en orden ascendente."<<endl; 
	
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			if(numeros[j] > numeros[j+1]){
				aux = numeros[j]; 
				numeros[j] = numeros[j+1]; 
				numeros[j+1] = aux; 
			}
		}
	}
	cout<<"Resultado ascendente: "<<endl; 
	
	for(i=0; i<5; i++){
		cout<<" "<<numeros[i]<<endl; 
	}
		cout<<"Resultado Descendente: "<<endl; 

		for(i=4; i>=0; i--){
		cout<<" "<<numeros[i]<<endl; 
	}
	getch(); 
	return 0; 
}
