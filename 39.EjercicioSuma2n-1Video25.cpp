// Ejercicio Crear un progrmama que calcule la secuencia de n elementos con la expresion 2n-1 Video 25 
#include<iostream>
#include<conio.h>
using namespace std; 

int main(){
	int n , res, i; 
	cout<<"\t\t\t Programa que calcula n numeros con expresion 2n +1 "<<endl; 
	cout<<"Digita la cantida de n numeros por calcular: ";
	cin>>n; 
	
	for(i=1; i<=n; i++){
		
	res += ((2*i)-1); 
	}
	cout<<"\nEl resultado es igual a: "<<res<<endl; 
	getch(); 
	return 0; 
	
}
