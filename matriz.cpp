#include<iostream>

class matriz
{
private: 
	int n;
	int** a = new int*[n];
	
	b ->	a -> a0000 * n
		c -> b0000 * n
		d -> c0000 * n	
public: 
	//matriz();
	matriz(int N);
	~matriz(){};
	
	matriz operator+(const matriz& otro);
	matriz operator-(const matriz& otro);
	matriz operator*(const matriz& otro);

	void ver(std::ostream& o)const;
	void leer(std::istream& i);
};

void matriz::ver(std::ostream& o)const
{
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			std::cout<<a[i][j]<<" ";
	std::cout<<std::endl;
	}
}

void matriz::leer(std::istream& i)
{
	for(int i=0;i<n;i++)
                for(int j=0;j<n;j++)
                       	std::cin>>a[i][j];

}

std::ostream& operator<<(std::ostream& o,const matriz& a)
{
	a.ver(o);
	return o;
}

std::istream& operator>>(std::istream& i, matriz& a)
{
	a.leer(i);
	return i;
}

matriz::matriz(int N)
{
	n = N;
	for (int i = 0; i < n; i++) 
   	 	a[i] = new int[n];

}


int main()
{
	matriz angel(9000);
	std::cin>>angel;	
	std::cout<<angel;
}
