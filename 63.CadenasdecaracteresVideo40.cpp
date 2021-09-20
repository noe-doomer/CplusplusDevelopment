// Ejemplo Cadenas de caracteres Video 40 
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std; 

int main(){
	char nombre[20]; 
	
	cout<<"Digite su nombre: \n"<<endl; 
	cin.getline(nombre,20,'\n'); 
	
	cout<<"Hola "<<nombre;
	
	getch(); 
	return 0; 
} 
