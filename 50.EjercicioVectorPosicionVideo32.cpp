// Ejercicio: Escribe un programa que lea de la entrada est�ndar un vector de n�meros y muestre en la salida est�ndar los n�meros del vector con sus �ndices asociados.
// Video 32
#include<iostream>
#include<conio.h>
using namespace std; 

int main(){
	int n, numero[100]; 
	
	cout<<"\t\t\tPrograma que lee un vector y muestra sus valores con posicion.\n"<<endl; 
	
	cout<<"\nDigite la cantidad de numeros en el vector: "<<endl; 
	cin>>n; 
	
	for(int i=0; i<=n; i++){
		cout<<"\nDigite un numero: "<<endl; 
		cin>>numero[i]; 
	}
	
	for(int i=0; i<=n; i++){
		cout<<"\nPosicion ["<<i<<" ]"<<" con valor ---> "<<numero[i]<<endl; 
		
	}
	getch(); 
	return 0;
}
