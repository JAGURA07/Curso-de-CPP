#include<iostream>
using namespace std;

int suma(int x,int y)
{
	int resultado;

	if(y==0)
		return x;
	
	if(x==0)
		return y;

	return 1+suma(x,y-1); //Sumando 1 B veces, mientras a B le resto 1 B veces
}

int exponencial(int x,int y)
{
	if(y==0)
		return 1;
	return x*(exponencial(x,y-1));

}

int fibo(int x)
{
	if(x==0)
		return 0;
	if(x==1)
		return 1;

	return fibo(x-1)+fibo(x-2);
}

int main()
{
	cout<<fibo(10)<<endl<<endl;

	int a,b;
	cin>>a>>b;
	cout<<suma(a,b)<<endl<<endl<<exponencial(a,b);

}
