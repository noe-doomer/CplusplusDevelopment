// Ejercicio Cadenas de caracteres Video 41 
#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std; 

int main(){
	char cadena[100],i,longitud; 
	
	cout<<"\t\tPrograma donde si la cadena supera los 10 elementos se muestran en pantalla: \n\n"; 
	cout<<"Digita tu cadena: \n"; 
	cin.getline(cadena,100,'\n');
	
	longitud = strlen(cadena); 
	
	if(longitud > 10 ){
		cout<<"Supera los 10 caracteres -- cadena:  "<<cadena<<endl; 
		
	} else{
		cout<<"\n\nNo se mostrara la cadena por ser menor a 10 caracteres."; 
	}
	 
	 getch(); 
	 return 0; 
	
}
