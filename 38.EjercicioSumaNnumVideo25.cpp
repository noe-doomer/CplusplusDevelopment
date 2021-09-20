// Ejercicio Ciclos Bucles Crear un programa que calcule la suma de 1+2+3+4+...+n. Video 25
#include<iostream>
#include<conio.h>
using namespace std; 

int main(){
	int n,suma; 
	
	cout<<"\t\t\tPrograma de sumatoria +n "<<endl; 
	cout<<"Digite la cantidad de numeros: "; 
	cin>>n; 
	
	for(int i=1; i<=n; i++){
		suma += i; 
	}
	
	cout<<"\nLa suma total 'n' es: "<<suma<<endl; 
	
	getch(); 
	return 0; 
}
