/*  Realice un programa que lea de la entrada estándar los siguientes datos de una persona:
 Edad: dato de tipo entero.
 Sexo: dato de tipo carácter.
 Altura en metros: dato de tipo real.
Tras leer los datos, el programa debe mostrarlos en la salida estándar. */
#include<iostream>

using namespace std; 

int main()
{
	float edad,altura; 
	char sexo[20];
	
	cout<<"Programa que lee tus caracteristicas \n"<<endl; 
	cout<<"Digite su edad: "<<endl; 
	cin>>edad; 
	cout<<"\nDigite su sexo: "<<endl; 
	cin>>sexo;
	cout<<"\nDigite su altura: "<<endl; 
	cin>>altura;
	
	cout<<"\nTu edad es de: "<<edad<<endl; 
	cout<<"\nTu sexo es : "<<sexo<<endl; 
	cout<<"\nTu altura es de: "<<altura<<" metros"<<endl; 

	cout<<"\t\t\t\tFIN"; 
	
	return 0; 
}
