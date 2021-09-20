// Ejercicio Copiar el contenido que elusuario introduzca en una cadena a otra - Funcion strcpy() Video 42 
#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std; 

int main(){
	char arreglo1[50], arreglo2[50]; 
	
	cout<<"\t\t\tPrograma que pide una cadena y la copia a otra.\n"; 
	cout<<"\nDigita la cadena: \n";
	cin.getline(arreglo1,50,'\n'); 
	
	strcpy(arreglo2,arreglo1); 
	
	cout<<"\nLa cadena copiada es igual a: "<<arreglo2<<endl; 
	
	return 0; 
	getch(); 
	
}

