// Ejercicio Escribe un programa que defina un vector de números y muestre en la salida estándar el vector en orden inverso—del último al primer elemento. Video 32
#include<iostream>
#include<conio.h>

using namespace std; 

int main(){
	int n, numeros[100]; 
	
	cout<<"\t\t\tPrograma que guarda un vector y lo muestra al inverso. "<<endl; 
	cout<<"Digita la cantidada de elementos: "; cin>>n; 
	
	for(int i=0; i<=n; i++){
		
		cout<<"\nDigita un numero: "; cin>>numeros[i]; 
		
	}
	
	for(int i=n; i>=0; i--){
		
		cout<<"\nposicion: ["<<i<<"] valor --> "<<numeros[i]; 
	}
	
	return 0; 
	getch(); 
	
}
