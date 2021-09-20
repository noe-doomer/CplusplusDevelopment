// Ejercicio video 7 Escribir la siguiente expresion en C++ (a + (b/c))/(d + (e/f))
#include<iostream>

using namespace std; 

int main()
{
	float a,b,c,d,e,f,res = 0; 
	cout<<"\t\t\t\t\tExpresion (a + (b/c))/(d + (e/f)) en C++\n\n"; 
	cout<<"Digite el valor de a: "<<endl; cin>>a; 
	cout<<"Digite el valor de b: "<<endl; cin>>b; 
	cout<<"Digite el valor de c: "<<endl; cin>>c; 
	cout<<"Digite el valor de d: "<<endl; cin>>d; 
	cout<<"Digite el valor de e: "<<endl; cin>>e; 
	cout<<"Digite el valor de f: "<<endl; cin>>f; 
	
	res = (a + (b/c))/(d + (e/f));
	
	cout.precision(2); 
	cout<<"\nEl resultado de la expresion con los valores es: "<<res<<endl; 
	
	return 0; 

	
}
