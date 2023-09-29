#include<iostream>
using namespace std;

struct plano
{
	int x,y;
};

plano operator+(const plano& a,const plano& b);

ostream& operator<<(ostream& rene,const plano& r)
{
	rene<<'('<<r.x<<','<<r.y<<')';
	return rene;
}

int main()
{
	plano a,b,r;
	
	cout<<endl<<"Valor 1 de a: ";
	cin>>a.x;
	cout<<endl<<"Valor 2 de a: ";
	cin>>a.y; 

	cout<<endl<<"Valor 1 de b: ";
	cin>>b.x;
	cout<<endl<<"Valor 2 de b: ";
	cin>>b.y;	

	r = a+b;

	cout<<a;
	cout<<b;
	cout<<r;
}

plano operator+(const plano& a,const plano& b)
{
	plano resultado;

	resultado.x = b.x + a.x;
	resultado.y = b.y + a.y;

	return resultado;
}
