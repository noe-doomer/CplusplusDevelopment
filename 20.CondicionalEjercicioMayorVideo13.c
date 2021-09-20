// Video 13 Ejercicio de Condicionales leer tres numeros y determinar cual es el mayor
#include<iostream>
#include<stdio.h>
using namespace std; 

int main(){
	int n1,n2.n3;
	cout<<"\t\t\t\tPrograma que calcula el numero mayor. "<<endl;
	
	cout<<"Digite los tres numeros consecutivos; "endl; 
	cin>>n1,>>n2>>n3; 
	
	if(n1 == n2 && n1 == n3){
		cout<<"Los numeros son iguales, todos son: ">>n1; 
	}
	
	else if (n1 > n2 && n1 > n3){
		cout<<"El numero mayor de los tres es: "<<n1<<endl; 
	}
	
		
	else if (n3 > n1 && n3 > n2){
		cout<<"El numero mayor de los tres es: "<<n3<<endl; 
	}	

	else if (n2 > n1 && n2 > n3){
		cout<<"El numero mayor de los tres es: "<<n2<<endl; 
	}
	else if (n1 == n2 && n1 > n3){
		cout<<"El numero mayor de los tres es: "<<n1<<endl; 
	}
	else if (n3 == n2 && n3 > n3){
		cout<<"El numero mayor de los tres es: "<<n3<<endl; 
	}
	else if (n1 == n3 && n1 > n2){
		cout<<"El numero mayor de los tres es: "<<n1<<endl; 
	}
	
	return 0; 
	
}
