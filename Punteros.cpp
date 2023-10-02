#include <iostream>
#include <string>

using namespace std;

struct JAVI{
	string nombre;
	JAVI *ptr;
};

struct ELEM{
	string nombre;
	ELEM *ant, *sig;
};

//int PILA[100000000];

int main(int argv, char* argc[]){
	ios :: sync_with_stdio(false);
 	cin.tie(nullptr);
	
	/**int PILA[10e10];
	int last = 0;
	PILA[last++] = 10;
	PILA[--last] = 0;
	if(last>0) PILA[last-1];*/

	ELEM *a,*b,*c;
	
	a->nombre = "ALEXIS";
	b->nombre = "IVAN";
	c->nombre = "ZARATE";

	a->sig = b;
	b->sig = c;
	c->sig = a;

	a->ant = c;
        b->ant = a;
        c->ant = b;

	(*a).nombre = "NO TENGO";

	return 0;
}
