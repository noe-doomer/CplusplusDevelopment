//Ejercicio pedir al usuario en cadena de caracteres dos valores uno entero y otro real y al ultimo convertirlos a sus valores numericos para sumarlos Video 48
#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std; 

int main()
{
	char n1[100];
	char n2[100]; 
	int num1;
	float num2,res;
	cout<<"\t\t't'Programa de conversion de caracteres a numeros relaes y enteros\n"<<endl; 
	cout<<"Digite el valor de un numero entero: "<<endl; 
	cin.getline(n1,100,'\n'); 
	
	cout<<"Digite el valor de un numero real: "<<endl; 
	cin.getline(n2,100,'\n'); 
	
	num1 = atoi(n1); 
	num2 = atof(n2); 
	res = num1 + num2; 
	cout<<"la suma de los caracteres a numeros es: "<<res<<endl; 
	
	return 0; 
	getch(); 
}
