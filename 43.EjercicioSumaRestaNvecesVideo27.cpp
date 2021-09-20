// Ejercicio Hacer un programa que calcule el resultado de la siguiente expresion: 1-2+3-4+5-6...n consecutivo Video 27 
#include<iostream>
#include<conio.h>
using namespace std; 

int main(){
	int n,res=0; 
	
	cout<<"\t\t\tPrograma que hace suma y resta de n numeros -+."<<endl;
	cout<<"\nDigite la cantidad de numeros n: "; 
	cin>>n;
	
	for(int i=1; i<=n; i++){
		
		if(i%2==0){
			res-= i; 	
		}
		else{
		    res += i; 
		}
	
	}
	
	cout<<"\nEl resultado es igual a: "<<res<<endl; 
	getch(); 
	return 0; 
	
}
