//Ejercicio Crear un programa que diga si una palabra es polindroma o no Video 45
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std; 

int main(){
	char word[50];
	char aux[50]; 
	
	cout<<"\t\t\tPrograma que indica si una palabra es polindroma o no,\n"; 
	cout<<"Digita la palabra: \n"; 
	cin.get(word,50,'\n'); 
	
	strcpy(aux,word); 
	strrev(aux); 
	
	cout<<"\nPalabra: "<<word<<"\nInvertida queda: "<<aux<<"\n"<<endl;; 

	
	if(strcmp(aux,word) == 0){
		cout<<"Es una palabra polindroma."; 
	}else{
		cout<<"No es una palabra polindroma difiere.";
	}
	
	return 0; 
	getch(); 
}
