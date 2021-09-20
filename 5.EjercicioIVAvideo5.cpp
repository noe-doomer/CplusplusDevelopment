// Ejercicio video 4 Elabore un programa que lea el precio de un producto y despues en la salida muestre el precio pero con el IVA aplicado.
#include<iostream>
using namespace std; 


int main()
{
	float precio,iva,total; 
	iva = 0.15;
	
	cout<<"Bienvenido al programa de precios con IVA"<<endl; 
	cout<<"Digita el precio del producto:"<<endl; 
	cin>>precio;
	total = precio * iva;
	precio =  precio + total; 
	
	cout<<"\n\nEl IVA es del 15% y el precio total es de: \n"<<precio;
	return 0; 
	
}
