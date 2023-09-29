#include<iostream>
using namespace std;

void swap(int* a,int* b)
{
	int aux = *a;
	*a=*b;
	*b=aux;
}

int main()
{
	int x=1,y=2;
	cout<<"Antes del swap: "<<x<<", "<<y<<endl;
	swap(x,y);
	cout<<"Despues del swap: "<<x<<", "<<y<<endl;
}
