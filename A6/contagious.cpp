#include"bits/stdc++.h"
using namespace std;


int main(){
	vector<pair<int,int>> vpr;
	int n; cin >> n;
	for(int i=0;i<n;i++){
		int a,b;
		cin >> a >> b;
		vpr.push_back({a,b});
	}
	vector<int>stor(100,-1);
	int k = 1;
	for(auto [a,b] : vpr){
		for(int i=0;i<b;i++){
			stor[a+i] =  k;
		}
		k++;
	}
	for(int i=1;i<=99;i++) cout<<stor[i]<<" ";
	cout<<endl;
}