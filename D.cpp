#include <iostream>

using namespace std;

int main(int argv, char *argc[]){
	int *ptr; //Arreglo dinámico
	int arre[10]; //Arreglo estático
	for(int i=0 ; i<10 ; i++) arre[i] = i;
	ptr = arre;
	cout << ptr << "   " << (ptr+1) << "   " <<  (ptr+2) << "\n";
return 0;
}
