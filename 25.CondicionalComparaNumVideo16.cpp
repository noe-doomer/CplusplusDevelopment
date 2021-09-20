// Video 16 Ejercicio Coloca tres numeros y despues otro extra que se compare con los tres y ver si en alguno es igual al cuarto numero. 
#include<iostream>

using namespace std; 

int main()
{
	int num1=5,num2=10,num3=15,num4; 
	
	cout<<"\t\t\t\tComparacion de tu numero frente a los numeros del backend\n"; 
	cout<<"Digite el cuarto numero: \n"; 
	cin>>num4; 
	
	if(num1 == num4){
		cout<<"El numero es igual a del espacio 1 que es igual a: "<<num1; 
	}
	else if (num2 == num4){
    	cout<<"El numero es igual al del espacio 2 que es igual a: "<<num2; 
	}
		else if (num3 == num4){
    	cout<<"El numero es igual al del espacio 3 que es igual a: "<<num3; 
	}
		else {
    	cout<<"El numero no coincide en espacio de memoria; Tu numero es: "<<num4; 
	}
	return 0; 
	
}
