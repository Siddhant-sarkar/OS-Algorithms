#include"bits/stdc++.h"
using namespace std;

void print(vector<int> arr){
	for(auto it : arr){
		cout << it << " --> ";
	}
	cout << " NULL\n";
}
set<int> indx,mem;
int main(){
	int n ; cin >> n;
	vector<int> fsize(n);
	for(int i=0;i<n;i++){
		cin>>fsize[i];
	}
	map<int,vector<int> > index;
	srand(time(NULL));
	for(auto it : fsize){
		int idn = rand()%100;
		if(!indx.count(idn)){
			indx.insert(idn);
			vector<int> f;
			for(int i = 0;i<it;i++){
				int mer = rand()%1000;
				if(!mem.count(mer)){
					mem.insert(mer);
					f.push_back(mer);
				}
			}
			index[idn] = f;
		}

	}
	for(auto [a,b] : index){
		cout<< a <<" : ";
		print(b);
		
	}
}