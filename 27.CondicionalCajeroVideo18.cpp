// Video 8 Ejercicio : Hacer un programa que simule un cajero automático con un saldo inicial de 1000 Dólares.
#include<iostream>
#include<stdlib.h>

using namespace std; 

int main(){
	int saldo_inicial = 1000,opc; 
	float saldo = 0 ,retiro,ingreso; 
	
	cout<<"\t\t\t\t\tBienvenido a su cajeto ATM."<<endl; 
	cout<<"\t\tMenu:\n"; 
	cout<<"1.Ingresar dinero en cuenta: "<<endl; 
	cout<<"2.Retirar dinero en cuenta: "<<endl; 
	cout<<"3. Cerrar."<<endl; 
	
	cout<<"\tIngrese la opcion: \n"<<endl; 
	cin>>opc;
	
	switch(opc){
		case 1: 
		cout<<"Cual es la cantidad de dinero a ingresar: "<<endl; 
		cin>>ingreso; 
		saldo = saldo_inicial + ingreso; 
		cout<<"\nSaldo total: "<<saldo<<endl; 
		break; 
		case 2: 
		cout<<"Cual es la cantidad a retirar: "<<endl; 
		cin>>retiro; 
		saldo = saldo_inicial - retiro; 
		cout<<"\nSaldo en cuenta: "<<saldo<<endl; 
		break; 
		case 3: break; 
		
	} 
	return 0; 
	
	
}
