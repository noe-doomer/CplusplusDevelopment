// Ejercicio Video 6 Escribe la siguiente expresión como expresión en C++: (a+b)/(c+d)
#include<iostream>

using namespace std; 

int main()
{
	float a,b,c,d,res; 
	
	cout<<"\t\t\t\tExpresion (a+b)/(c+d) resuelta\n\n"<<endl; 
	cout<<"Digita el valor de a: "<<endl;  cin>>a; 
	cout<<"Digita el valor de b: "<<endl;  cin>>b; 
	cout<<"Digita el valor de c: "<<endl;  cin>>c; 
	cout<<"Digita el valor de d: "<<endl;  cin>>d; 
	
	res = (a+b)/(c+d); 
	
	cout.precision(2); 
	cout<<"\nEl resultado de la expresion es: \n"<<res; 
	
	return 0; 
}
