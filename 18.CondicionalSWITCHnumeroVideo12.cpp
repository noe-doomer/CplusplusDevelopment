// Video 12 Condicional SWITCH Ejercicio de numeros 
#include<iostream>

using namespace std; 

int main(){
	int numero; 
	
	cout<<"Digite un numero del 1-5 y se imprimira en el condicional: "<<endl;
	cin>>numero; 
	
	switch(numero){
		
		case 1: 
				cout<<"Es el numero 1."<<endl; break;
		case 2: 
				cout<<"Es el numero 2."<<endl; break;
		case 3: 
				cout<<"Es el numero 3."<<endl;  break; 
		case 4: 
				cout<<"Es el numero 4."<<endl; break; 
		case 5: 
				cout<<"Es el numero 5."<<endl; break; 

	}
	
	return 0; 
}
