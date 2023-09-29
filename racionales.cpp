#include<iostream>

class racional
{
	void reduce();

	private: 
		int _num,_den;
	public:
		racional(int num,int den);
		racional();
		racional(const racional& otro);
		~racional(){};
	
		void operator+=(const racional& otro);
		void operator-=(const racional& otro);
		void operator*=(const racional& otro);
		void operator/=(const racional& otro);
		
		racional operator*(const racional& otro);

		bool operator==(const racional& otro);

		void imprimeRacional(std::ostream& pene)const;
		void en(std::istream& duro);
		
		std::ostream& operator<<(std::ostream& pene);

};
		
racional::racional()
{
	_num=0;
	_den=1;
}

racional::racional(int num,int den)
{
	_num = num;
	_den = den;
	reduce();
}

racional::racional(const racional& otro)
{
	_num = otro._num;
	_den = otro._den;
}

int mcd(int a,int b)
{
	if (b == 0)
		return a;
	else 
		return mcd(b,a%b);
}

void racional::reduce()
{
	int m = mcd(_num,_den);
	_num/=m;
	_den/=m;

	if(_num < 0 && _den < 0 || _den < 0 && _num > 0)
	{
		_num = -_num;
		_den = -_den;
	}
}

void racional::operator+=(const racional& otro)
{
	// a/b + c/d = (a*d + b*c) / b*d
	int a=_num,b=_den;
	int c=otro._num,d=otro._den;
	_num = a*d + c*b;
	_den = b*d;
	reduce();
}

void racional::imprimeRacional(std::ostream& pene)const
{
	pene<<_num<<'/'<<_den;	
}

void racional::en(std::istream& duro)
{
	char a; 
	duro>>_num>>a>>_den;
	reduce();
}

std::ostream& racional::operator<<(std::ostream& pene)
{
	 pene<<_num<<'/'<<_den;
	return pene;
}


int main()
{
	racional a(112,524),b;	
	std::cout<<a;
}	


