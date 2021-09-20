// Video 14 Ejercicio: Crea un programa que digite un numero y te diga si es positivo o negativo.
#include<iostream>

using namespace std;

int main()
{
	int numero; 
		cout<<"\t\t\t\t\tPrograma que calcula si el numero es negativo o positivo.\n\n"; 
	cout<<"Digite su numero: \n"; 
	cin>>numero; 
	
	if(numero<0){
		cout<<"El "<<numero<<" es negativo."; 
	}
	else if (numero>0){
		cout<<"El "<<numero<<" es positivo."; 
	}
	else{
				cout<<"El "<<numero<<" es neutro."; 
	}
	return 0; 
}
