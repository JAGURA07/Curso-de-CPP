#include<iostream>

struct Nodo
{
	int dato;
	Nodo *der;
	Nodo *izq;
};

Nodo *crearNodo(int n)
{
	Nodo *nNodo = new Nodo();

	nNodo -> dato = n;
	nNodo -> der = NULL;
	nNodo -> izq = NULL;	

	return nNodo;	
}

Nodo *arbol = NULL;

void insertar(Nodo *&arbol, int n)
{
	if(arbol == NULL)
	{
		Nodo *nNodo = crearNodo(n);
		arbol = nNodo;
	}
			
	else
	{
		if(n < arbol -> dato)
			insertar(arbol -> izq, n);
		else 
			insertar(arbol -> der,n);
	}
}

void mostrar(Nodo *arbol, int cont)
{
	if(arbol == NULL)
		return;
	else 
	{
		mostrar(arbol ->der,cont+1);
		for(int i=0;i<cont;i++)
		{
			std::cout<<"   ";
		}
		std::cout<<arbol -> dato <<std::endl;
		mostrar(arbol -> izq, cont+1);
	}
}

bool buscar(Nodo *arbol,int elem)
{
	if (arbol == NULL)
		return false;
	else
		if(arbol -> dato == elem)
			return true;
	else
		if(elem < arbol -> dato)
			return buscar(arbol -> izq, elem);
	else
	       if(elem > arbol -> dato)
	       		return buscar(arbol -> der, elem);	       
}

void imID(Nodo * arbol)
{
	if(arbol->izq!=NULL) imID(arbol->izq);
	std::cout<<arbol->dato<<" ";
	if(arbol->der!=NULL) imID(arbol->der);
}

void imDI(Nodo * arbol)
{
        if(arbol->der!=NULL) imDI(arbol->der);
        std::cout<<arbol->dato<<" ";
        if(arbol->izq!=NULL) imDI(arbol->izq);
}

void menu(void)
{
	int n,aux,h;
	do
	{
		std::cout<<"\t MENU\n";
		std::cout<<"1.- Insertar nodo \n";
		std::cout<<"2.- Mostrar \n";
		std::cout<<"3.- Buscar \n";
		std::cout<<"4.- Imprimir de izquierda a derecha\n";
		std::cout<<"5.- Imprimir de derecha a izquierda\n";
		std::cout<<"6.- Salir\n\n";
		std::cout<<"Opcion: ";
		std::cin>>aux;

		switch(aux)
		{
			case 1:
				system("clear");
				std::cout<<"\n Dato: ";
				std::cin>>n;
				insertar(arbol,n);
				break;
			case 2: 
				system("clear");
				std::cout<<"\n\n";
				mostrar(arbol,0);
				std::cin>>h;
				break;
			case 3: 
				system("clear");
				std::cout<<"Cual: ";
				int dato;
				std::cin>>dato; 
				if(buscar(arbol,dato) == true)
					std::cout<<"\n SI";
				else
					std::cout<<"\n No";
				std::cin>>h;
				break;
			case 4:
				system("clear");
				std::cout<<"\n\n";
				imID(arbol);
				std::cin>>h;
				break;
			case 5:
				system("clear");
				std::cout<<"\n\n";
				imDI(arbol);
				std::cin>>h;
				break;
		}
		
		system("clear");
	}while(aux!=6);
}

int main()
{
	menu();

	return 0;
}

