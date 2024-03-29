#include<iostream>
#include<vector>
using namespace std;

void f(vector<int>& n)
{
	for(int i=0; i<n.size();i++)
		n[i] *= 2;
	n.push_back(100);
	n.push_back(200);
}

int main()
{
	vector<int> n = {1,2,3,4,5};

	for(int i : n)
		cout<<i<<", ";

	cout<<endl;

	f(n);
	
	for(int i : n)
                cout<<i<<", ";

	return 0;
}
