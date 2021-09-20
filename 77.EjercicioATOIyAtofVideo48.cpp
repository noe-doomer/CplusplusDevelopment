// Ejercicio Realizar programa con funcion atoi y atof Video 48 
#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std; 

int main(){
	char cad[] = "123.456";
	float numero,res; 
	
	numero = atof(cad); 
	
	res = numero + 10; 
	cout<<res<<endl; 
	
	getch(); 
	return 0; 

}
