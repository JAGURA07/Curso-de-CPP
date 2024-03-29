#include<iostream>
#include<cmath>
using namespace std;

double f(double x)
{
	/* double aux; 
	aux = 2 * x;
	return aux; */
	return x*2;
}

double chicharronera(double a,double b,double c,double &x2)
{
	double x1,D = (b*b) - (4*a*c);
	
	if(D>0)
	{
		cout<<"Hay dos soluciones reales\n";
		 x1 = (-b+sqrt(D))/2*a;
		 x2 = (-b-sqrt(D))/2*a;
	}
	else if(D == 0)
		x1 = -b / 2*a;
	else {
		cout<<endl<<"No hay soluciones reales\n";
		return -1;
	}

	return x1;	
}

int main()
{
	/*double x =  f(1000);

	cout<<x;*/
	double x2=0;
	cout<<endl<<f(999);
	
	cout<<endl<<chicharronera(1,6,2,x2)<<endl<<x2;
	return 0;
}
