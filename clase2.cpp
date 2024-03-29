#include<iostream>
#include<random>
#include<cstdlib>
#include<vector>
using namespace std;

int f(int* s,int n)
{
	int aux=0;
	for(int i=0;i<n;i++)
		aux += s[i];

	return aux;
}

int g(vector<int>& roman)
{
	random_device rd;
        mt19937 gen(rd());

        int minimo=1, maximo=100,ran;

        uniform_int_distribution<> distribucion(minimo, maximo);

        for(int i=0;i<1000;i++)
	  	roman.push_back(distribucion(gen));
                
	double aux=1;
	for(int i=0;roman.size();i++)
		aux *= roman[i];

	return aux;
}

void vctr(vector<int>v)
{
	for(int i = 0; i<3;i++ )
		v.push_back(10);
}

int main()
{
	/*int* ptr;
	int tamanio = 10;

	vector = (int*)malloc(tamanio*sizeof(int));
	if(vector == NULL)
	{	
		cout<<"Error al declarar el vctor";
		return 1; 
	}*/

	int v[1000],e[1000];
	srand(time(NULL));

	random_device rd;
	mt19937 gen(rd());

	int minimo=1, maximo=100;

	uniform_int_distribution<> distribucion(minimo, maximo);

	for(int i=0;i<1000;i++)
	{
		v[i] = distribucion(gen);
		e[i] = rand()%100;
	}

	/*for(int i=0;i<1000;i++)
        {
                cout<< v[i]<<" - "<<e[i]<<endl;
        }*/
	
	cout<<f(v,1000)<<endl;

	vector<int> roman;

	roman.push_back(10);
	roman.push_back(9);
	roman.push_back(11);

	for(int i=0;i<roman.size();i++)
		cout<<roman[i]<<" ";	

	cout<<endl;	
	roman.pop_back();
	 for(int i=0;i<roman.size();i++)
                cout<<roman[i]<<" ";
		
	cout<<endl<<g(roman);

	vector<int> b;
	vctr(b);
	for(int i : b)
		cout<<endl<<b[i];

	
	return 0;
}	
