// Ejercicio Realizar programa que digites una cade de caracteres e indique el numero de concurrencias de las vocales en la frase Video 49
#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std; 

int main(){
	char frase[100]; 
	int va=0,ve=0,vi=0,vo=0,vu=0; 
	
	cout<<"\t\tPrograma que cuenta las vocales. \n"; 
	cout<<"Digite la frase: "<<endl; 
	cin.getline(frase,100,'\n'); 
	
	for(int i=0; i<100; i++){
		
		switch(frase[i]){
			case 'a': va++; break; 
			case 'e': ve++; break; 
			case 'i': vi++; break; 
			case 'o': vo++; break; 
			case 'u': vu++; break;
			
		}
	}
	cout<<"Contador de vocales: "<<endl; 
	cout<<"Vocal a: "<<va<<endl; 
	cout<<"Vocal e: "<<ve<<endl; 
	cout<<"Vocal i: "<<vi<<endl; 
	cout<<"Vocal o: "<<vo<<endl; 
	cout<<"Vocal u: "<<vu<<endl; 
		return 0; 
		getch(); 
}
