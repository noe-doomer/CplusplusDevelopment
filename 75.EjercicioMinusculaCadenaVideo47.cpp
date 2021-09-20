// Pasar una cadena a minusculas Funcion strlwr() Video 47
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std; 

int main(){
	char palabra[] = "PROGRAMACIONats"; 
	
	cout<<"\t\tPrograma que cambia las cadenas a minusculas\n\n"; 
	strlwr(palabra);
	cout<<palabra<<endl; 
	
	return 0; 
	getch(); 
	
	
}
