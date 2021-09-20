// Ejercicio Escriba un programa que calcule el valor de: 2^1+2^2+2^3+...+2^n Video 27 
#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std; 

int main()
{
	int n,potencia=0,suma=0; 
	
	cout<<"\t\t\tPrograma que suma las potencias de 2 n veces."<<endl;
	cout<<"\nDigite la cantidad n de potencias: "; 
	cin>>n;
	
	for(int i=1; i<=n; i++){
		potencia = pow(2,i); 
		suma += potencia; 
	}
	
	cout<<"\nLa suma de las potencias es igual a: "<<suma<<"\n"<<endl; 
	
	system("pause"); 
	return 0; 	
}
