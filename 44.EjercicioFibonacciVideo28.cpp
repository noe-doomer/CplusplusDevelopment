//  Ejercicio ciclo FOR Hacer un que realice la serie fibonacci -- 1 1 2 3 5 8 13...n  Video 28 
#include<iostream>
#include<stdlib.h>
using namespace std; 

int main(){
	int n, x=0, y=1, z; 
	
	cout<<"\t\t\tPrograma que dicta la serie de Fibonacci. \n"; 
	cout<<"\n Digita la cantidad n de la serie: \n"<<endl; 
	cin>>n; 
	cout<<"\n|-----------------|\n"<<endl;
	for(int i=1; i<=n; i++){
	
	z = x + y; 
	x = y; 
	y = z; 
	
	cout<<" "<<z; 
	}
	cout<<"\n"<<endl; 
	system("pause"); 
	return 0; 
	
}
