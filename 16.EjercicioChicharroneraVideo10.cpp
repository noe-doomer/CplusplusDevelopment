/*  Video 10 Escriba un programa que calcule las soluciones de una ecuación de segundo grado de la forma ax^2 + bx + c = 0,
 teniendo en cuenta que: (-b+sqrt(pow(b,2)-4*a*c))/(2*a) y (-b-sqrt(pow(b,2)-4*a*c))/(2*a) */
#include<iostream>
#include<math.h>

using namespace std; 

int main()
{
	float a,b,c,x1 = 0, x2 =0; 
	
	cout<<"\t\t\t\t\t\tPrograma que calcula una ecuacion de segundo grado. "<<endl; 
	cout<<"Digite el valor de a: "<<endl; cin>>a; 
	cout<<"Digite el valor de b: "<<endl; cin>>b; 
	cout<<"Digite el valor de c: "<<endl; cin>>c;
	
	x1 =  (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
	x2 =  (-b-sqrt(pow(b,2)-4*a*c))/(2*a);
	
	cout.precision(2); 
	cout<<"Los resultados son: x1 = "<<x1<<" y x2 = "<<x2<<endl; 
	
	return 0;
}
