// Ejercicio Crear un programa que pase las variables a MAYUSCULAS con funcion strupr() Video 46
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std; 

int main(){
	char word[] = "Ejemplo de mayus , hola buen dia. ";
	
	cout<<"\t\t\tPrograma que pasa todo a mayusculas. \n\n"; 
	strupr(word); 
	cout<<"\n"<<word<<endl; 
	
	return 0;
	getch(); 
	
}
