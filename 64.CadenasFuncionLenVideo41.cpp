// Ejercicio Cadena de caracteres funcion strlen()  Video 41 
#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std; 

int main(){
	char palabra[] = "hola que tal"; 
	int longitud = 0; 
	
	longitud = strlen(palabra); 
	
	cout<<"Numero de elementos en la cadena = "<<longitud<<endl; 
	
	return 0; 
	getch(); 
}
