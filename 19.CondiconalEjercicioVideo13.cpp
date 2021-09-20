// Video 13 Condicionales if else con numeros mayores o menores 
#include<iostream>

using namespace std; 

int main()
{
	int n1,n2; 
	
	cout<<"\t\t\t\t\tPrograma que compara el numero mayor.\n"<<endl;
	cout<<"Digite el numero 1 y numero 2: "<<endl; 
	cin>>n1>>n2; 
	
	if(n1 == n2){
		cout<<"Ambos numeros son iguales."<<endl; 
	}
	else if(n1 > n2){
		cout<<"El numero: "<<n1<<" es el mayor"<<endl; 
	}
	else {
		cout<<"eL numero: "<<n2<<" es el mayor"<<endl; 
	}
	
	return 0; 
}
