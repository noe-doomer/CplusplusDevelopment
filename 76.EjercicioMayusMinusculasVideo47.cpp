// Ejercicio: Pedir su nombre al ususario en mayuscula, si su nombre comienza por la letra A convertir  nombre a minusculas caso contrario no convertirlo Video 47 
#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std; 

int main(){
	char nombre[100]; 
	
	cout<<"\t\t\tPrograma que pide nombre en mayusuculas y si empieza con A se pasa a minusculas. \n";
	cout<<"Digita tu nombre en Mayusculas: "<<endl; 
	cin.getline(nombre,100,'\n'); 
	
	if(nombre[0] == 'A'){
		strlwr(nombre); 
		cout<<"\n\nTu nombre empieza con A. "<<endl;
		cout<<"\t\t\t\t\nBienvenido: "<<nombre<<endl; 
	}
	else{
		cout<<"Tu nombre NO empieza con A se va directo con MAYUS."<<endl; 
		cout<<"\t\t\t\t\t\nBIENVENIDO: "<<nombre<<endl;
	}
	
	getch(); 
	return 0; 
}
