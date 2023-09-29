#include<iostream>
using namespace std;

int euclides(int a,int b)
{
	if(b==0)				//MCD(a,b)
		return a;			//MCD(a-b,b), dónde a>=b
	else
		return euclides(b,a%b);		//MCD(a,0) -> return MCD = a
}

int main()
{
	cout<<euclides(105,70);
	
}
