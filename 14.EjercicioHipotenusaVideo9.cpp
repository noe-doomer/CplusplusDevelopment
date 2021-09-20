// Ejercicio 2 Video 9  Escriba un programa que lea de la entrada estándar los dos catetos de un triángulo rectángulo y escriba en la salida estándar su hipotenusa.
#include<iostream>
#include<math.h>

using namespace std; 

int main()
{
	int cat1,cat2,hip,res; 
	
	cout<<"\t\t\t\t\tPrograma que calcula la hipotenusa de un triangulo. \n"<<endl;
	cout<<"Digite el cateto 1: "<<endl; cin>>cat1; 
	cout<<"Digite el cateto 2: "<<endl; cin>>cat2; 
	
	hip = sqrt((cat1*cat1) + (cat2*cat2));
	
	cout<<"\nEl resultado de la hipotenusa es: "<<hip<<endl;

	return 0; 
}
