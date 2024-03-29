#include<iostream>
#include<vector>
using namespace std;

struct celular
{
	int bateria=0,ram=0; 
	string procesador=" "; 
};

void imprime(vector<celular> v)
{
	for(const auto x : v)
		cout<<endl<<x.procesador;
	
}

int main()
{
	vector<celular> x(3);
	
	x[0].procesador = "Snapdragon";
	x[1].procesador = "Intel";
	x[2].procesador = "AMD";

	x.push_back({0,0,"IOS"});

	imprime(x);

	return 0;	
}
