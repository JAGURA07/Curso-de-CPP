#include<iostream>

void menu(void)
{
	system("clear");
	std::cout<<"Bienvenute"<<std::endl;
	std::cout<<"1.Suma "<<std::endl;
	std::cout<<"2. Resta "<<std::endl;
	std::cout<<"3. Division "<<std::endl;
	std::cout<<"4. Multiplicacion "<<std::endl;
}

double suma(double uno, double dos)
{
	return uno+dos;
}

void resta(void)
{

}

void division(void)
{

}

void multiplicacion(void)
{

}

int main()
{
	int n;
	double x,y;
	menu();
	std::cin>>n;
	std::cin>>x>>y;

	switch(n)
	{
		case 1:
			double r;
			r  = suma(x,y);
			std::cout<<r<<std::endl;
			break;
		case 2:
			resta();
			break;
		case 3:
			division();
			break;
		case 4:
			multiplicacion();
			break;
		default:
			std::cout<<"Caso no contemplado"<<std::endl;
	}
}
