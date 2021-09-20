//Ejercicio Cadena de caracteres concatenar una cadena Video 44
#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std; 

int main()
{
	char cat1[] = "Esto es una cadena"; 
	char cat2[] = " de ejemplo"; 
	char cat3[30]; 

	cout<<"\t\tPrograma que une cadenas con la funcion de concatenar\n\n"; 
		
	strcpy(cat3,cat1); 
	
	strcat(cat3,cat2); 
	
	cout<<cat3<<endl; 
	
	
	return 0; 
	getch(); 
}
