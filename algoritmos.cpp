#include<iostream>
using namespace std;

void eval(int x)
{
	if(x%2==0)
		cout<<"SI"<<endl;
	else
		cout<<"NO"<<endl;
}

int main()
{
	int x;
	cin>>x;
	eval(x);
}
