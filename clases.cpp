#include<iostream>

class persona
{
	public:

	int edad;
	char inicial;
	float estatura;
	std::string nombre;
	persona(int,char,float,std::string);

	void print (void);
};

persona::persona(int Edad,char Inicial,float Estatura,std::string Nombre)
{
	edad = Edad;
	inicial = Inicial;
	estatura = Estatura;
	nombre = Nombre;
}

void persona::print(void)
{
	std::cout<<"Edad: "<<edad<<std::endl;
	std::cout<<"Inicial: "<<inicial<<std::endl;
	std::cout<<"Estatura: "<<estatura<<std::endl;
	std::cout<<"Nombre completo: "<<nombre<<std::endl;
}

int main()
{
	persona Angel(19,'A',1.75,"Angel Armando Ortega Guillen");
	
	persona Jafet(23,'J',1.75,"Jafet Alexis Gutierrez Rangel");

	Angel.print();
	Jafet.print();
}
