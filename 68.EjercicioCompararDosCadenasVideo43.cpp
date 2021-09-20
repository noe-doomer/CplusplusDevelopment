// Ejericicio Pedir al usuario 2 cadenas de caracteres y mostrar si son iguales o en su casa cual es mayor alfabeticamente Video 43
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std; 

int main(){
	char palabra1[50]; 
	char palabra2[50]; 
	
	cout<<"\t\t\tPrograma que compara dos cadenas y dice cual es mayor alfabeticamente o si son iguales. \n"; 
	cout<<"\nDigita la primer cadena: "<<endl; 
	cin.getline(palabra1,50,'\n'); 
	cout<<"\nDigita la segunda cadena: "<<endl; 
	cin.getline(palabra2,50,'\n'); 
	
	if(strcmp(palabra1,palabra2) == 0){
		cout<<"Las palabras son iguales."<<endl; 
	}
	else if (strcmp(palabra1,palabra2) > 0){
		cout<<palabra1<<" esta despues alfabeticamente. "<<endl; 
		
	}
		else if (strcmp(palabra1,palabra2) < 0){
		cout<<palabra2<<" esta despues alfabeticamente. "<<endl; 
		
	}
	return 0; 
	getch(); 
	
}
