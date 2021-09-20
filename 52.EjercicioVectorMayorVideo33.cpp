// Ejercicio Desarrolle un programa que lea de la entrada estándar un vector de enteros y determine el mayor elemento del vector. Video 33
#include<iostream>
#include<conio.h>
using namespace std; 

int main(){
	int n, numeros[100],mayor=0; 
	
	cout<<"\t\t\tPrograma que lee la entrada de un vector y te dice cual es el mayor de sus elementos. \n"<<endl; 
	cout<<"Digite la cantidad del vector: "; cin>>n; 
	
	for(int i=0; i<=n; i++){
		cout<<"\nDigita un numero: "; cin>>numeros[i]; 
	
		if(numeros[i] > mayor){
			mayor = numeros[i]; 
		}	
		
	}
	
	cout<<"\n De todo el vector el elemento mayor es: "<<mayor; 
	return 0; 
	getch(); 
	
	
	
}
