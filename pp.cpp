#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector <int> a(5);
	vector <int> b(5);

	a[2] = 5;
	b[2] = 5;

	cout<<b[2];
	cout<<endl<<a[2];

	return 0;
}

