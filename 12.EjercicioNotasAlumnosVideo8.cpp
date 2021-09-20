// Ejercicio Video 8 Escriba un programa que lea la nota final de cuatro alumnos y calcule la nota final media de los cuatro alumnos.
#include<iostream>

using namespace std; 

int main()
{
	float c1,c2,c3,c4,media; 
	
	cout<<"Programa calificacion media de cuatro alumnos "<<endl; 
	
	cout<<"Digita la primer nota alumno 1: "<<endl; cin>>c1; 
	cout<<"Digita la segunda nota alumno 2: "<<endl; cin>>c2; 
	cout<<"Digita la tercer nota alumno 3: "<<endl; cin>>c3; 
	cout<<"Digita la cuarta nota alumno 4: "<<endl; cin>>c4; 
	
	
	media = (c1+c2+c3+c4)/4; 
	
	cout.precision(2); 
	cout<<"La calificacion final media de los cuatro es: "<<media<<endl; 
	
	return 0; 

}
