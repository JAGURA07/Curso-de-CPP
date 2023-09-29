#include<iostream>
#include<math.h>
using namespace std;

double factorial(int x)
{
	double res=1;
	for(int i=1;i<=x;i++)
		res = res*i;
	return res;
}

double seno(double x)
{   //Sen(x) = x - (x³/3!) + (x⁵/5!) ... 
	int j=1;
	for(int i=3;i<1000;i=i+2)
       {       
		double arriba, abajo;
	
		arriba = pow(x,i);
		abajo = factorial(i);
		
		if (j%2==0)
			x = x+(arriba/abajo);
			
		else
			x= x-(arriba/abajo);
			
			j++;
		       	
	}	       
       	return x; 
}

int main()
{	
	double angulo;
	cin>>angulo;
	cout<<endl<<seno(angulo);
}
