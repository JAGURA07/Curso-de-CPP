#include<iostream>
using namespace std;

// LI-FO
// Last In First Out = La última entrada, sale primero
// a,b,c,d,e,f -> f,e,d,c,b,a
// Push = Añadir un elemento al final de la pila.
// Pop = Leer y eliminar un elemento de la pila.


class Pila
{
	private:
		static const int MAX = 5; 
		int tope;
		int valores[MAX]; 
	public:
		Pila(){
			tope = -1; 
		}

		int empty()
		{
			if(tope == -1)
			return 1; 
			else 
			return 0;	
		}

		int full()
		{
			if(tope == MAX-1)
				return 1;
			else
				return 0;
		}
	
		void push(int x)
		{
			if(!full())
				valores[++tope] = x;
			else
				cout<<endl<<"No es posibile, pila llena";
		}

		int pop()
		{
			if(!empty())
				return (valores[tope--]);
			else{
				cout<<endl<<"No es posible, pila vacia";
				return 0;
			}
		}

};

int main()
{
	Pila p;

	p.push(5);
	p.push(10);
	p.push(15);
	p.push(24);
	p.push(34);
	
	cout<<endl<<p.pop();
	cout<<endl<<p.pop();
	cout<<endl<<p.pop();
	cout<<endl<<p.pop();
	cout<<endl<<p.pop();
	cout<<endl<<p.pop();
}
