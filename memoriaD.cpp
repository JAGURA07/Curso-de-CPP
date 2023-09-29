#include<iostream>
using namespace std; 

void hola(int* a)
{
	for(int i=0;i<10;i++)
                a[i]=i;
}

void mundo(int* a)
{
	for(int i=0;i<10;i++)
               cout<<a[i]<<endl;
}


int main()
{
	/*double a[10] = {1,2,3,4,5,6,7,8,9,10};
	hola(a);

	for(int i=0;i<10;i++)
                cout<<a[i]<<endl; */
	/* unsigned long int n = 18446744073709551615;
        n++;
        n++;
        cout<<n; */
	int *m = new int[10];
	hola(m);
	mundo(m);
}		
