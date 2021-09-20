// Ejercicio Cadena de caracteres comparar dos cadenas y ver si son iguales o difieren VIdeo 43
#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std; 

int main(){
	char palabra1[] = "Hola Buen dia."; 
	char palabra2[] = "Hola Buen dia.";
	
	cout<<"\t\t\tPrograma que compara dos cadenas. \n\n"; 
	
	if(strcmp(palabra1,palabra2) == 0){
		
	cout<<"Las cadenas son iguales en longitud y caracteres"; 
	
	} else {
		cout<<"Cadenas diferentes. \n"; 
		
	}
	return 0;
	getch(); 	
}
