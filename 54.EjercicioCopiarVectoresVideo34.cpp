// Ejercicio Realiza un programa que defina dos vectores de caracteres y despu�s almacene el contenido de ambos vectores 
//en un nuevo vector, situando en primer lugar los elementos del primer vector 
//seguido por los elementos del segundo vector. Muestre el contenido del nuevo vector en la salida est�ndar.
#include<iostream>
#include<conio.h>

using namespace std; 

int main(){
	
	char letras1[] = {'a','b','c','d','e'}; 
	char letras2[] = {'f','g','h','i','j'}; 
	char letras3[10];
	
	cout<<"Copiamos ambos vectores en uno solo: \n"<<endl; 
	
	for(int i=0; i<5; i++){
		letras3[i] = letras1[i]; 
	}
	
	for(int i=5; i<10; i++){
		letras3[i] = letras2[i-5]; 
		
	}
	
	for(int i=0; i<=10; i++){
		
		cout<<letras3[i-1]<<endl; 
	}
	getch(); 
	return 0; 
}
