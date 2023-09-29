#include<iostream>
using namespace std;

int main()
{
	int a;

	cout<<a<<endl;

	cout<<"1+1: ";
	cin>>a;

	if(a==2)
	{
		cout<<"Correcto"<<endl;

		cout<<"10 + 9 = "<<endl;
		cin>>a;

		if(a==19)
		{
			cout<<"¡Doblemente felicidades!"<<endl;
		
			cout<<"8+9= ";
			cin>>a;

			if(a==17)
			{
				cout<<"";
			}

			else
			{
				cout<<"Incorrecto!";
			}

		}

		else
		{
			cout<<"Te mamaste, no es 19"<<endl;
		}

	}

	else	
	{
		cout<<"Incorrecto"<<endl;
	}

}
