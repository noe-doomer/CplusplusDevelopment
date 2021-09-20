//Ejercicio Ordenamiento por seleccion Ordenar numeros Video 51
#include<iostream>
#include<conio.h>
using namespace std; 

int main(){
	int numeros[] = {3,2,1,5,4}; 
	int i,j,aux,min; 
	
	cout<<"\t\t\tOrdenamiento por seleccion: \n"<<endl; 
	for(i=0; i<5; i++){
		min = i; 
		for(j=i+1; j<5; j++){
			if(numeros[j] < numeros[min]){
				min = j; 
			}
		}
		aux = numeros[i]; 
		numeros[i] = numeros [min]; 
		numeros[min] = aux; 
	}
	cout<<"Orden Ascendente: "<<endl; 
	for(i=0; i<5; i++)
	{
		cout<<numeros[i]<<endl; 
	}
	cout<<"Orden Descendente: "<<endl; 
	for(i=4; i>=0; i--)
	{
		cout<<numeros[i]<<endl; 
	}
	getch(); 
	return 0;
}
