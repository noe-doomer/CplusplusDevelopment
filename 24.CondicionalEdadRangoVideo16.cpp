// Video 16 Ejericio Crear programa que pongas una edad y te diga si esta en el rango de 18-25 años 
#include<iostream>

using namespace std; 
int main()
{
	int edad; 
	
	cout<<"\t\t\t\tPrograma que calcula el rango de 18-25 y ver si se cumple.\n\n"; 
	cout<<"Digite la edad: \n";
	cin>>edad; 
	
	if(edad>=18 && edad<=25){
		cout<<"La edad esta en el rango (18-25)"; 
	} else{
		cout<<"La edad no esta en dicho rango"; 
	}
	
	return 0; 
	
}
