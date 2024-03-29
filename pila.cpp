#include<iostream>
using namespace std;

struct nodo 
{
	int dato;
	nodo* siguiente; 
};

struct pila
{
	nodo* tope=nullptr; 

	bool vacia()
	{
		return tope == nullptr; 
	}

	void push(int elemento)
	{
		nodo* nuevoNodo = new nodo; 
		nuevoNodo -> dato = elemento;
		nuevoNodo -> siguiente = tope; 
		tope = nuevoNodo;	
	}

	int pop()
	{
		if(vacia())
		{
			cout<<"La pila esta vacia!"<<endl;
			return -1; 
		}
		nodo* eliminado = tope; 
		int elemento = eliminado -> dato; 
		tope = eliminado -> siguiente; 
		delete eliminado; 
		return elemento; 
	}
};

int main()
{
	pila x; 
	x.push(10);
	x.push(1);
	x.push(7);
	x.push(9);
	/*cout<<x.pop()<<endl;
	cout<<x.pop()<<endl;
	cout<<x.pop()<<endl;
	cout<<x.pop()<<endl;*/
	
	while(!x.vacia())
		cout<<x.pop()<<endl;
	
	cout<<x.vacia();
	return 0;
}
