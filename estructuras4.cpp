#include<iostream>
#include<vector>
using namespace std;

struct resultados
{
	string tempPasada, evaluaciones; 
	vector<string> resultados; 
};

struct jugador
{
	string nombre; 
	int edad; 
	string posicion; 
	resultados res; 
};

struct equipo
{
	string nombre;
	vector<jugador> jugadores;

};

int main()
{
	jugador uno = {"Messi",42,"Capitan"};
	jugador dos = {"Ronaldo", 50, "Delantero"};
	jugador tres = {"Jordan",58,"Defensa"};
	
	equipo cuatro; 
	cuatro.nombre = "Cruz Azul";

	cuatro.jugadores.push_back(uno);
	cuatro.jugadores.push_back(dos);
	cuatro.jugadores.push_back(tres);

	cout<<endl<<"El mejor equipo de la temporada: "<<cuatro.nombre;
	for(const auto x : cuatro.jugadores)
		cout<<endl<<x.nombre;	

	return 0;
	
}
