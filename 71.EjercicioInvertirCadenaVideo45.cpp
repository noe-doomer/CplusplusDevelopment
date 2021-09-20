//Ejercicio Invertir una cadena de caracteres funcion strrev() Video 45
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std; 

int main(){
	char word[] =  "Quesadillas con queso"; 
	
	cout<<"\t\tPrograma que iniverta una cadena \n\n"; 
	cout<<word; 
	
	strrev(word); 
	cout<<"\n\n"<<word<<endl; 
	
	return 0; 
	getch(); 
	
}
