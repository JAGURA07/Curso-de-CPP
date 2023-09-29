#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int aux=1,n;

	cout<<"¿Que tabla quieres ver?";
	cin>>n;
	
	for(int i=2;i<=n;i++)
	{
		for(int j=2;j<=i;j++)
		{
			if(i%j==0)
			{
				aux++;
			}
		}
		if(aux==2)
			cout<<endl<<i;
		aux=1;
	}

	return 0;

}

