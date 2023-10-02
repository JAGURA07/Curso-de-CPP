#include <iostream>
#include <string>

using namespace std;

string nombre[1000];
int izq[1000],der[1000];

void RID(int p){
	if(p>1000) return;
	RID(izq[p]);
	RID(der[p]);
}

int main(int argv, char* argc[]){
	int u,v,w;
	for(int i=0 ; i<10 ; i++){
		cin >> u >> v >> w;
		//w=1 derecha
		//w=0 izquierda
		if(w) der[u] = v;
		else izq[u] = v;
	}
	
	return 0;
}
