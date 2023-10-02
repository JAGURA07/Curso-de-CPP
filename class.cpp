#include<iostream>

class Paro {
	private:
	        int edad;
		double estatura;	
		std::string nombre; 
        public:
		Paro();
		Paro(std::string Nombre);
		
		void Mostrar(void);

};

void Paro::Mostrar(void)
{
  std::cout<<nombre<<edad<<estatura;
}

Paro::Paro(){
	nombre="0";
}

Paro::Paro(std::string Nombre){
	nombre = Nombre;
}



int main()
{
	Paro a;
	Paro b("Ian");
	a.Mostrar();
	b.Mostrar();	
       	return 0;
}


