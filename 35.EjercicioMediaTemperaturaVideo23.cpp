/* Ejercicio 4: Escriba un programa que tome cada 4 horas la temperatura exterior, ley�ndola durante un per�odo de 24 horas. 
Es decir, debe leer 6 temperaturas. Calcule la temperatura media del d�a, la temperatura m�s alta y la m�s baja. Video 23 */
#include<iostream>
#include<conio.h>
using namespace std; 

int main(){
	float temperatura, hora = 0 , media, i=0, suma ; 
	
	cout<<"\n\nPrograma que calcula las temperaturas durante el dia y muestra la media de estas."<<endl; 
	
	for(hora=1; hora<=24; hora+=4){
		i++;
		cout<<"Digite la temperatura "<<i<<": "<<endl; 
		cin>>temperatura; 
		suma = suma + temperatura; 
	}
	media = suma/6; 
	cout<<"\nLa temperatura media es: "<<media<<endl; 
	
	getch(); 
	return 0; 
	
}
