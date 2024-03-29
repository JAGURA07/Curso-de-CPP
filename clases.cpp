#include<iostream>

class racional
{
private:
	int num, den;
public: 
	racional();
	racional(int _num,int _den=1);
	racional(const racional& otro);
	~racional(){}

	void operator*=(const racional& otro);
	void operator/=(const racional& otro);
 	void operator+=(const racional& otro);
	void operator-=(const racional& otro);

	racional operator*(const racional& otro);
	racional operator+(const racional& otro);
	racional operator-(const racional& otro);
	racional operator/(const racional& otro);
	void show(void);
};

racional::racional()
{
	num = 0;
	den = 1;  // 0/1
}

racional::racional(int _num,int _den)
{
	num = _num;
	den = _den; 
}

racional::racional(const racional& otro)
{
	num = otro.num;
	den = otro.den; 
}

void racional::show(void)
{
	std::cout<<num<<'/'<<den<<std::endl;
}

void racional::operator*=(const racional& otro)
{
	// 	a/b * c/d = ac/bd
	num*=otro.num;
       	den*=otro.den;	
}

void racional::operator/=(const racional& otro)
{
        //  a/b / c/d = ad/bc
	num*=otro.den;
	den*=otro.num;
}

void racional::operator+=(const racional& otro)
{
        // a/b + c/d = (ad + bc)/ bd
	//yo creo que debemos de declarar otro dato para guardar el nuevo num
	int nuevoNum=0;
	nuevoNum+=(num*otro.den)+(den*otro.num);
	num = nuevoNum;
	// num = (num*otro.den)+(den*otro.num); 
	den*=otro.den;
}

void racional::operator-=(const racional& b)
{	
    racional aux(num * b.den - b.num * den,den * b.den);
    num = aux.num;
    den = aux.den;
}

racional racional::operator*(const racional& otro)
{
	racional aux(num,den);
	aux*=otro;
	return aux;
}

racional racional::operator/(const racional& otro)
{
        racional aux(num,den);
        aux/=otro;
        return aux;
}

racional racional::operator+(const racional& b)
{ 
	/*racional aux(num * b.den + b.num * den,den * b.den); 
	return aux;*/

       	racional aux (num, den);
       	aux+=b; 
	return aux;
}

racional racional::operator-(const racional& otro)
{
        racional aux(num,den);
        aux-=otro;
        return aux;
}


int main()
{
	int x=10;
	racional a; 
	a.show();
	racional b(10,11);
	racional c(b);
	racional d(9);
	racional r(x);
 
	a = a * b; 
	d+=c; 

	a.show();
	b.show();
	c.show();
	d.show();
	r.show();
	
	std::cout<<std::endl<<10+15;
	

	a.~racional();
	b.~racional();
	c.~racional();
	return 0; 
}

