/* Ejercicio Realice un programa que calcule la descomposición en factores primos de un número entero.
Por ejemplo: 20 = 2*2*5. */
#include<iostream>
#include<stdlib.h>
using namespace std; 

int main(){
	int numero,primo =1; 
	
	cout<<"\t\tPrograma que descompone un numero entero en sus numeros primos. "<<endl; 

	
	do{
			cout<<"\n\nDigita el numero: "<<endl; 
			cin>>numero; 
		if(numero==0){
			cout<<"\nCero no tiene primos. \n Finaliza el programa. "<<endl;
		}else{
		cout<<"\nDescomposicion en factores primos: "<<endl;

		if(numero==1){
			cout<<" 1 * "<<endl;
		}
		for(int i=1; i!=numero;){
		
		if(numero%2==0){
			numero = numero / 2; 
			cout<<"2 * ";  
		}
			if(numero%3==0){
			numero = numero / 3; 
			cout<<"3 * ";  
		}
			if(numero%5==0){
			numero = numero / 5; 
			cout<<"5 * ";  
		}
			if(numero%7 ==0){
			numero = numero / 7; 
			cout<<"7 * ";  
		}
		if(numero%11==0){
			numero = numero / 11; 
			cout<<"11 * ";  
		}
		if(numero%13==0){
			numero = numero / 13; 
			cout<<"13 * ";  
		}
		if(numero%17==0){
			numero = numero / 17; 
			cout<<"17 * ";  
		}
		if(numero%23==0){
			numero = numero / 23; 
			cout<<"23 * ";  
		}
		else if(numero%numero==0){
     	cout<<numero;
    	 numero= numero/numero;
    }
     if(i!=numero){
    cout<<" * ";  } 
   	}
		}
		cout<<"\n \n";
			}while(numero!=0); 
	
	system("pause"); 
	return 0; 
	
}
