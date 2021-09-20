// Ejercicio video 6 Escribe la siguiente expresión como expresión en C++: (a/b) + 1
#include<iostream>

using namespace std; 

int main()
{
	float a, b,res; 
	
	cout<<"Expresion representada en C++"<<endl; 
	cout<<"\nDigita la variable a: "<<endl; 
	cin>>a; 
	cout<<"\nDigita la variable b: "<<endl; 
	cin>>b; 
	cout<<"\nLa expresion es (a/b) + 1"; 
	res = (a/b) + 1; 
	
	cout.precision(2); 
	cout<<"\n\nEl resultado es: "<<res;
	
	return 0; 
	
}
