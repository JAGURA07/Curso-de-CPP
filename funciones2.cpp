#include<iostream>
using namespace std;

int menu (void)
{
	int aux;

	system("clear");
	cout<<"1.- suma "<<endl;
	cout<<"2.- Resta "<<endl;
	cout<<"3.- Multiplicacion "<<endl;
	cout<<"4.- Division "<<endl;
	cout<<"Ingrese su opcion: ";
	cin>>aux;

	return aux;
}

double suma(double x,double y)
{
	double resultado = x+y;
	return resultado;
}

double resta(double x, double y)
{
	double resultado = x-y;
	return resultado;
}

double multiplicacion(double x, double y)
{
	double resultado = x*y;
	return resultado;
}

double division(double x, double y)
{
	double resultado = x/y;
	return resultado;
}

int main()
{
	double a,b,c,d,e,resultado;
	int x=menu();
	
	cout<<"Ingrese sus 2 numeros: ";
	cin>>a>>b;

	switch (x)
	{
		case 1: //f(x) = (-b +- sqrt(b²-4ac) )/ 2a -> 4ac >= b²
			resultado = suma(a,b);
			cout<<resultado;
		break;
		
		case 2: //f(x) = v_0 + g*t 
			resultado = resta(a,b);
			cout<<resultado;
		break;

		case 3: //f(x) = V_0 *t - (g*t²/2)
			resultado = multiplicacion(a,b);
			cout<<resultado;
		break;

		case 4: // f(x) = co * sec (x)
			resultado = division(a,b);
			cout<<resultado;
		break;
		
		default:	
			cout<<"Hola default";	
	}

	// si x < 0 ----> "Por favor, intente de nuevo"
	// si x > 0 ----> "Muchas gracias por usarme"
	// si x = 0 ----> "Que resultado tan elegante"
}
