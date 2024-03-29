#include<iostream>
using namespace std;

struct abarrotes
{
	string producto; 
	double balance,gramaje;
	
	void imprimir()
	{
		cout<<endl<<"Lista de abarrotes: ";
		cout<<endl<<"producto: "<<producto;
		cout<<endl<<"balance: "<<balance;
		cout<<endl<<"gramaje: "<<gramaje;
	}
	void llenar();
};

void abarrotes::llenar()
{
	cout<<"Producto: ";
	cin>>producto;
	cout<<"Balance: ";
	cin>>balance;
	cout<<"Gramaje: ";
	cin>>gramaje;
}

int main()
{
	abarrotes anairam,luis; 
	anairam.llenar();
	cout<<endl;
	luis.llenar();
	cout<<endl;
	anairam.imprimir();
	cout<<endl;
	luis.imprimir();
	return 0;
}
