// Ejercicio video 8 Intercambiar los valores de dos variables
#include<iostream>

using namespace std; 

int main()
{
	int x,y,aux; 
	
	cout<<"Intercambio de variables. "<<endl;
	cout<<"Digite el valor de x: "<<endl; cin>>x; 
	cout<<"Digite el valor de y: "<<endl; cin>>y; 
	cout<<"x : "<<x<<" <> y: "<<y<<endl; 
	aux = x;  
	x = y;
	y = aux;
	
	cout<<"Intercambio. "<<"x: "<<x<<" <> y: "<<y<<endl;
}
