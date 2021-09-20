// Ejercicio ciclos y bucles Realiza un programa que realize la entrada de numero hasta que se digite un cero y detener el programa paara mostrar cuantos numeros
// mayores que cero 
#include<iostream>
#include<conio.h>
using namespace std; 

int main(){
	int numero; 
	int c=0; 
	
 	do {
 		cout<<"\nDigite un numero: "<<endl; 
 		cin>>numero; 
 		
 		if(numero > 0){
 			c++;
		 }
		 else {
		 cout<<"No contable"<<endl; 
		 }
	 }while(numero != 0); 
	 
	 cout<<"\nLas veces que se digitaron numeros mayores a cero fueron: "<<c<<endl; 
	 cout<<"\t\t\n\nFIN"<<endl;
	 
	 getch(); 
	 return 0; 
	 
} 
