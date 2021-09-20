//Ejercicio Ordenamiento por insercion Ordenar de manera natural numeros Video 51
#include<iostream>
#include<conio.h>
using namespace std; 

int main(){
	int numeros[] = {4,3,5,2,1}; 
	int i,pos,aux; 
	
	cout<<"\t\t\t\nPrograma que ordena numeros por insercion "<<endl;
	
	for(i=0;i<5;i++){
		pos = i; 
		aux = numeros[i]; 
		while((pos>0) && (numeros[pos-1] > aux)){
			numeros[pos] = numeros [pos-1]; 
			pos--; 
		}
		numeros[pos] = aux; 
	}
	cout<<"Orden ascendente:\n"; 
	for(i=0; i<5; i++){
		cout<<numeros[i]<<endl; 
	}
	cout<<"Orden descendente: "; 
	for(i=5; i>=0; i--){
		cout<<numeros[i]<<endl; 
	}
	return 0; 
	getch(); 
}
