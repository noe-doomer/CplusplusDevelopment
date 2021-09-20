// Operaciones aritmeticas Programa que le ingresas dos variables y muestra la suma, resta, multiplicacion y division 
#include<iostream>

using namespace std; 

int main()
{
	int n1,n2, suma = 0, resta = 0, multiplicacion = 0, division = 0; 
	
	cout<<"Operaciones aritmeticas. "; 
	cout<<"\n\nDigita el primer numero:\n";
	cin>>n1; 
	cout<<"\n\nDigita el segundo numero:\n";
	cin>>n2; 
	
	suma = n1 + n2; 
	resta = n1 - n2; 
	multiplicacion = n1 * n2; 
	division = n1 / n2; 
	cout<<"Con los numeros "<<n1<<" y "<<n2<<" se haran las operaciones aritmeticas"<<endl; 
	cout<<"La suma es: "<<suma<<endl; 
	cout<<"La resta es: "<<resta<<endl; 
	cout<<"La multiplicacion es: "<<multiplicacion<<endl; 
	cout<<"La division es: "<<division<<endl; 

	return 0; 
}
