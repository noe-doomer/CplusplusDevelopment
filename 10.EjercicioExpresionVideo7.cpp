// Ejercicio video 7 Escribe la siguiente expresión como expresión en C++: a + (b/(c-d))
#include<iostream>

using namespace std; 

int main()
{
	float a,b,c,d,res = 0; 
	
	cout<<"\t\t\t\t\tPrograma que calcula la expresion a + (b/(c-d)) \n"<<endl; 
	cout<<"Digite la variable a: "<<endl; cin>>a; 
	cout<<"Digite la variable b: "<<endl; cin>>b; 
	cout<<"Digite la variable c: "<<endl; cin>>c; 
	cout<<"Digite la variable d: "<<endl; cin>>d; 
	
	res = a + (b/(c-d)); 
	
	cout<<"\n\nEl resultado de la expresion es: "<<res<<endl; 
	
	return 0; 
	
}
