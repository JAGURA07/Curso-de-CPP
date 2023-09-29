#include<iostream>
#include<cmath>
using namespace std; 

int contador(int i)
{
	int primos[10] = {2,3,5,7,11,13,17,19,23,29};

	cout<<primos[i]<<endl;
	
	if(i<9)
		return contador(i+1);
	else
		return 0;
}

double chicharronera(double a, double b, double c)
{
	double aux;
	aux = (-b +sqrt (pow(b,2)-4*a*c))/(2*a);
	return aux;	
}

int alan(int perro)
{
	int aux; 
	aux = perro *2; 
	return aux; 
}


void menu(void)
{
	cout<<"Hola, bienvenido!"<<endl;
}

int main()
{
	/*
	int x; 
	x = 5;
	menu();
	cout<<alan(x);*/
	cout<<contador(0);
}


