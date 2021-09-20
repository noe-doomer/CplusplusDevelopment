// Ejercicio Convertir dos cadenas de minusculas a Mayusculas y despues compararlas para decir si son iguales Video 46 
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std; 

int main(){
	char cad1[50]; 
	char cad2[50]; 
	
	cout<<"\t\t\tPrograma que ejecuta dos cadenas a mayusculas y te dice si son iguales o no.\n\n"; 
	cout<<"Digita la primer cadena: "<<endl; 
	cin.getline(cad1,50,'\n'); 
	cout<<"\nDigita la segunda cadena: "<<endl; 
	cin.getline(cad2,50,'\n'); 
	strupr(cad1); 
	strupr(cad2); 
	
	if(strcmp(cad1,cad2) == 0){
		
		cout<<"Ambas son cadenas iguales"<<endl; 
		cout<<cad1<<"\n"<<cad2<<endl;
	}else{
				cout<<"Son diferentes cadenas. "<<endl; 
				cout<<cad1<<"\n"<<cad2<<endl;

	}
	return 0; 
	getch(); 

}
