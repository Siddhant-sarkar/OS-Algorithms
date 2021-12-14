#include<bits/stdc++.h>
using namespace std;

int main(){
	int n ; cin >> n;
	vector<pair<int,bool> > mem_space(n,{0,true});
	for(int i=0;i<n;i++) cin >> mem_space[i].first;

	int m ; cin >> m;
	vector<int> pr_size(m);
	for(int i=0;i<m;i++) cin>>pr_size[i];

	// best fit
	for(auto pr : pr_size)	{
		int mini = INT_MAX ,idx = -1;
		for(int i=0;i<n;i++){
			if(mem_space[i].first-pr>=0 && mem_space[i].second ){
				if(mem_space[i].first-pr < mini){
					mini = mem_space[i].first-pr;
					idx = i;
					mem_space[i].second = 0;
				}
			}
		}
		if(idx==-1) cout<<"The process "<< pr << " can't be allocated\n";
		else cout<< "Allocating the process " << pr << " into " <<idx+1<<endl;
	}
}
