#include <bits/stdc++.h>

using namespace std;

int main(int argv, char* argc[]){
	
	int a[10], *b, *c;
	for(int i=0 ; i<10 ; i++){
		cin >> a[i]>> b[i];}
	c=b;

	vector<int> v(10);

	for(int i=0 ; i<10 ; i++) v[i] = a[i];
	v.clear();
	v.assign(10, 0);

	v.push_back(10);
	v.size(); //devolver unsigned int

	return 0;

}
