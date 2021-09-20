// Video 11 Condicional IF ELSE ejercicio de calcular numero igual o diferente 
#include<iostream>

using namespace std; 

int main()
{
	int numero, dato = 5; 
	cout<<"\t\t\t\t\t\t\tEl dato es igual a 5.\n"<<endl; 
	cout<<"Ahora digite su numero.\n"<<endl; 
	cin>>numero;
	if(numero != dato){
		cout<<"\nEl numero no es igual al dato."<<endl;
	}
	else{
		cout<<"\nEl numero que digito es igual al dato que es 5."<<endl; 
		
	}
	
	return 0; 
}
