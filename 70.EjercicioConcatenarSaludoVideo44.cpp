// Ejercicio crear un programa con una cadena que diga "Hola que tal" y despues preguntar el nombre al usuario para despues unir el nombre con la prime cadena
// que termine diciendo Hola que tal (Nombre del usuario)  Video 44
#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;

int main(){
	char saludo[] = "Hola que tal ";
	char nombre[50]; 
	
	cout<<saludo<<endl; 
	cout<<"¿Cual es tu nombre? "<<endl;
	cin.getline(nombre,50,'\n');
	
	strcat(saludo,nombre); 
	cout<<"\n"<<saludo<<endl; 
	return 0; 
	getch(); 
	
}
