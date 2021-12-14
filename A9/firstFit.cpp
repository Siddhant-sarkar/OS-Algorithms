#include<bits/stdc++.h>
using namespace std;

int main(){
	int n ; cin >> n;
	vector<pair<int,bool> > mem_space(n,{0,true});
	for(int i=0;i<n;i++) cin >> mem_space[i].first;

	int m ; cin >> m;
	vector<int> pr_size(m);
	for(int i=0;i<m;i++) cin>>pr_size[i];

	// first fit
	for(auto pr : pr_size)	{
		for(int i=0;i<n;i++){
			if(pr <= mem_space[i].first && mem_space[i].second){
				cout<< "Allocating "<<pr<<" into "<< i+1<<endl;
				mem_space[i].second = false;
				break;
			}
		}
	}
}