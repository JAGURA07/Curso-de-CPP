#include<iostream>
using namespace std;

int a,b; 

void swap(int* a, int* b)
{
	int v=*b;
       	*b=*a;
	*a=v;
}

int main()
{
	int arreglo[10] = {1,2,3,4,5,6,7,8,9,10}; //[0][1][2][3][4][5][6][7][8][9]
	cout<<"Antes del swap: "<<arreglo[0]<<"   "<<arreglo[9]<<endl;

	swap(&arreglo[0],&arreglo[9]);

	cout<<"Despues del swap: "<<arreglo[0]<<"    "<<arreglo[9];
}	
