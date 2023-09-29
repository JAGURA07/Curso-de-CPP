#include<iostream>

using namespace std;

int main()
{
	char letra;
	cin>>letra;

	switch(letra)
	{
		case 'a':	
			cout<<"Buenas 1";
			break;
		case 'b': 
			cout<<"Buenas 2";
			break;
		case 'c':
			cout<<"Buenas 3";
			break;
		case 'd': 
			cout<<"Buenas 4";
			break;
		default:
			cout<<"Caso no registrado, intente de nuevo, puto";
	}

}
