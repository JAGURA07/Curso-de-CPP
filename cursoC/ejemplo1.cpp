#include<iostream>
#include<cmath.h>
using namespace std; 


double chicharron_con_valentina(double a, double b, double c)
{
	double x1 = (-b+sqrt((b*b)-4*a*c))/(2*a);
	//double x2 = 
	return x1;
}

int main()
{
	int a,bc;
	cin>>a>>b>>c;

	double aux;
	 aux = chicharron_con_valentina(a,b,c);
	cout<<"Respuesta: "<<aux<<endl;
	
	//cout<<suma(a,b)<<endl;
}
