// Video 14 Realizar un programa que lea un numero y te arroje si es par o impar CONDICIONALES 
#include<iostream>
using namespace std; 

int main()
{
	int numero; 
	
	cout<<"\t\t\t\t\tPrograma que calcula si el numero es par o impar.\n\n"; 
	cout<<"Digite su numero: \n"; 
	cin>>numero; 
	if(numero%2==0)
	{
		cout<<"El "<<numero<<" es un numero par."; 
		
	} else {
		cout<<"El "<<numero<<" es un numero impar."; 
	}
	
	return 0; 
	
}
