/* Ejercicio Video 9 
La calificaci�n final de un estudiante es la media ponderada de tres notas: la nota de pr�cticas que cuenta un 30% del total, 
la nota te�rica que cuenta un 60% y la nota de participaci�n que cuenta el 10% restante. 
Escriba un programa que lea de la entrada est�ndar las tres notas de un alumno y escriba en la salida est�ndar su nota final. */

#include<iostream>

using namespace std; 

int main()
{
	float practica, teorica, participacion,nota_final; 
	cout<<"Programa que calcula las notas media de un estudiante con su procentaje correspondiente. "<<endl; 
	
	cout<<"Digite la nota de practica: "<<endl;  cin>>practica;
	cout<<"Digite la nota teorica: "<<endl;  cin>>teorica;
	cout<<"Digite la nota de participacion: "<<endl;  cin>>participacion;

	practica *= 0.30;
	teorica *= 0.60; 
	participacion *= 0.10; 
	
	nota_final = practica + teorica + participacion; 
	
	cout<<"\n La nota final es: "<<nota_final; 
	
	return 0; 
}
