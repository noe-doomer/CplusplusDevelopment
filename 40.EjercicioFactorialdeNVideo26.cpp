// Ejercicio Hacer un programa que calucle el facotrial de un numero 1*2*3*4...*n* consecutivamente Video 26 
#include<iostream>
#include<conio.h>
using namespace std; 

int main(){
	int i, numero, multi =1;  
	
	cout<<"\t\t\tPrograma que calcula el factorial de un n numeros. "<<endl; 
	
   cout<<"Digite el numero n para multiplicar: "; 
	cin>>numero; 
	
	for(i=1; i<=numero; i++){
	
	multi *= i; 
	
	}
	cout<<"El facotial de: "<<numero<<" es igual a: "<<multi<<endl; 
	
	getch(); 
	return 0; 
	
}

