#include <bits/stdc++.h>

using namespace std;

vector<int> v;

void op1(){
	int k;
	cin >> k;
	int *a = lower_bound(v.begin(), v.end(), k);
	if(*a == k)
		return;
	if(*a == v.end()){
		v.push_back(k);
		return;
	}
	*a = k;
}

void op2(){
	int a, b;
	cin>>a>>b;
	cout<<upper_bound(v.begin(), v.end(), b)-lower_bound(v.begin(),v.end(), a)+1<<"\n";
}

int main(){
	int n, q;
	cin>>n>>q;
	while(n--){
		int aux;
		cin >> aux;
		v.push_back(aux);
	}
	sort(v.begin(), v.end());
	while(q--){
		int aux;
		cin >> aux;
		switch(aux){
			case 1:
				op1();
				break;
			case 2:
				op2();
				break;
		}
	}

	return 0;	
}
