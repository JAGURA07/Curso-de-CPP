#include<iostream>
#include<math.h>
#include<fstream>

void pareto(double b,double a, int n)
{
	std::ofstream archivo("pareto.csv"); // El archivo se abre en ofstream para solo escritura 
					     
	
	double v[n];  //Vector para n iteraciones

	for(int i=1;i<=n;i++){ // Iniciamos en 1 para evitar dividir por 0 
		v[i] = (a*pow(b,a))/pow(i,a+1); //Distribución de pareto usando "POW" para los exponentes
		archivo<<v[i]<<", "; //Guardamos en el archivo pareto.csv para 'Comma separeted Values'
	}
	
}

int main()
{
	double x1,x2;
	int n;
	std::cout<<"Valor minimo, Valor máximo, N: ";
	std::cin>>x1>>x2>>n;

	pareto(x1,x2,n); //Llamamos a la función pareto 

	return 0;
}
