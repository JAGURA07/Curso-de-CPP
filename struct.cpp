#include<iostream>
using namespace std;

struct persona
{
	int edad;
	double estatura; 
	char genero;
	string nombre;
};

void mostrar(persona ferran)
{
	cout<<"Imprimiendo a "<<ferran.nombre<<endl;
	cout<<"Edad: "<<ferran.edad<<endl;
	cout<<"Genero: "<<ferran.genero<<endl;
	cout<<"Estatura: "<<ferran.estatura<<endl;

}	

void asignar(persona& roman)
{
	cout<<"Nombre: ";
	cin>>roman.nombre;
	cout<<"Genero: ";
	cin>>roman.genero;
	cout<<"Estatura: ";
	cin>>roman.estatura;
	cout<<"Edad: ";
	cin>>roman.edad;
}

int main()
{
	persona x,y,z,a,b,c,m;
	/*x.nombre = "JAGURA";
	x.genero = 'H';
	x.estatura = 1.77;
	x.edad = 23; 

	cout<< x.edad<<endl;
	cout<< x.estatura<<endl;
	cout<< x.genero<<endl;
	cout<< x.nombre<<endl;*/

	asignar(x);
	asignar(y);
	asignar(z);
	
	mostrar(x);
	mostrar(y);
	mostrar(z);

	return 0;
}
