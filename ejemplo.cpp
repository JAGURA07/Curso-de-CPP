#include<iostream>
#include<stdio.h>
using namespace std;

void funcion(int x)
{
	int c = getchar();
	cout<<"Oa"<<endl;
}

char menu(void)
{
	system("clear");
	int aux;
	cout<<"1.- Opcion 1"<<endl<<"2.-Opcion 2"<<endl;
	cin>>aux;
	funcion(aux);

	char r;	
	system("clear");
	cout<<endl<<endl<<"Desea repetir el programa? s/n ";
	cin>>r;
	return r;
}

int main()
{
	char r='s';
	while(r=='s' || r=='S')
		r=menu();
}
