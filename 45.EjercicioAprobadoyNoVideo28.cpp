/* Ejercicio En una clase de 5 alumnos se han realizado tres ex�menes y se requiere determinar el n�mero de: 
 a) Alumnos que aprobaron todos los ex�menes.
 b) Alumnos que aprobaron al menos un examen.
 c) Alumnos que aprobaron �nicamente el �ltimo examen.
 
Realice un programa que permita la lectura de los datos y el c�lculo de las estad�sticas. */
#include<iostream>
#include<stdlib.h>
using namespace std; 

int main(){
	int exam1,exam2,exam3,t=0,u=0,l=0,alumnos=5; 
	
	cout<<"\t\t\tPrograma que calcula aprobados y no de 5 alumnos con variantes. "<<endl; 
	
	for(int i=1; i<=alumnos; i++){
		cout<<"\n Digite calificacion del primer examen  del alumno "<<i<<":  "; 
		cin>>exam1;
		cout<<"\n Digite calificacion del segundo examen  del alumno "<<i<<":  "; 
		cin>>exam2;
		cout<<"\n Digite calificacion del tercer examen  del alumno "<<i<<":  "; 
		cin>>exam3;
		
		if(exam1 > 5 && exam2 > 5 && exam3> 5){
			
			t++;
		}
		else if(exam1 > 5 && exam2 < 6 && exam3 < 6){
			u++; 
		}
		else if(exam1 < 6 && exam2 > 5 && exam3 < 6){
			u++; 
		}
			else if(exam1 > 5 || exam2 > 5 && exam3 < 6){
			u++; 
		}
		else if(exam1 < 6 && exam2 < 6 && exam3 > 5){
			l++;
		}
	}
	
	cout<<"\nLos alumnos que aprobaron todos los examenes fueron: "<<t<<endl; 
	cout<<"\nLos alumnos que aprobaron al menos un examen fueron: "<<u<<endl; 
	cout<<"\nLos alumnos que aprobaron el ultimo examen fueron: "<<l<<endl; 
	
	
	return 0; 
	system("pause"); 
}

