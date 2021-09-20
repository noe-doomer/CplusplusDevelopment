// Video 17 Ejercicio Mostrar los meses del año pidiendole al usuario un numero entre (1-12) y mostrar el mes al que corresponda
#include<iostream>

using namespace std; 

int main(){
	int mes; 
	
	cout<<"\t\t\t\tPrograma que dice que mes del año es de acuerdo a un numero.\n\n"; 
	cout<<"Digite su numero: \n"; 
	cin>>mes; 
	
	switch(mes){
		
		case 1: cout<<"1-El mes es enero."; break; 
		case 2: cout<<"2-El mes es febrero."; break;
		case 3: cout<<"3-El mes es marzo."; break;
		case 4: cout<<"4-El mes es abril."; break;
		case 5: cout<<"5-El mes es mayo."; break;
		case 6: cout<<"6-El mes es junio."; break;
		case 7: cout<<"7-El mes es julio."; break;
		case 8: cout<<"8-El mes es agosto."; break;
		case 9: cout<<"9-El mes es septiembre."; break;
		case 10: cout<<"10-El mes es octubre."; break;
		case 11: cout<<"11-El mes es noviembre."; break;
		case 12: cout<<"12-El mes es diciembre."; break;
		default: cout<<"No es una opcion valida."; break; 
	}
	
	return 0; 
	
}

