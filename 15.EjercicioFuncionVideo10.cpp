// Ejercicio Video 10 Realice un programa que calcule el valor que toma la siguiente función para unos valores dados de x e y: f(x,y) = sqrt(x) / (pow(y,2)-1)
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	float x,y,resultado = 0; 

	cout<<"\t\t\t\tPorgrama que calcula una funcion."<<endl;
	cout<<"Digite el valor de x: "<<endl; cin>>x;
	cout<<"Digite el valor de y: "<<endl; cin>>y; 
	
	resultado = sqrt(x) / (pow(y,2)-1);
	
	cout.precision(2); 
	cout<<"\nEl valor de la funcion es: "<< resultado<<endl;
	
	return 0; 
}
