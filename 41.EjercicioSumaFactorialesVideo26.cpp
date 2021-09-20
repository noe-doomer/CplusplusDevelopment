// Ejercicicio crear un programa que haga una suma de factoriales 1!+2!+3!+...n!+.. consecutivo Video 26 
#include<iostream>
#include<stdlib.h>
using namespace std; 

int main(){
	int numero,i,facto=1,sumafac;
	
	cout<<"\t\t\tPrograma que realiza la sumatoria de factoriales."<<endl; 
	cout<<"\nDigite los n factorial para sumarlos: "; 
	cin>>numero;
	
	for(i=1; i<=numero; i++){
		
		facto *= i; 
		sumafac += facto; 
	}
	cout<<"\n\nLa suma de los factoriales es igual a: "<<sumafac<<"\n"<<endl; 
	system("pause"); 
	return 0;
}
