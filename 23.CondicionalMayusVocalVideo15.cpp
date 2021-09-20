// Video 15 Ejercicio SWITCH Crear programa que introduzca una vocal y diga si es mayuscula o miniscula o si no es vocal tambien lo indique 
#include<iostream>

using namespace std; 

int main()
{
	char voc; 
	
	cout<<"\t\t\t\tPrograma que calcula si es vocal y dice si es mayuscula o minuscula.\n\n"; 
	cout<<"Digite su caracter:\n"; 
	cin>>voc; 
	
	switch(voc){
		
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': cout<<"Es una vocal minuscula."; break; 
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U': cout<<"Es una vocal mayuscula."; break; 
		default: cout<<"No es una vocal. "; break; 
	}
	
	return 0; 
}
