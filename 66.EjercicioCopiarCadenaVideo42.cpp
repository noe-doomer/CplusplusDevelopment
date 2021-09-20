// Ejercicio Cadenas copiar una cadena de caracteres a otra strcpy Video 42
#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std; 

int main(){
	char cadena[] = "Hola esta es una copia.";
	char cadena2[20];
	 
	cout<<"\t\t\tPrograma que copia una cadena a otra. \n"; 
	
	 strcpy(cadena2,cadena);
	 
	 cout<<"\nCadena: "<<cadena2<<endl; 
	 
	 return 0; 
	 getch(); 
	
}
