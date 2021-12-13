#include<bits/stdc++.h>
using namespace std;

void bankers (vector<vector<int>> varr,int n,int p,vector<int> avail){
	int p_count = p;
	vector<bool> check(n,1);
	while(p_count){
		for(int i = 0;i<p;i++){
			bool toAdd=true;
			for(int j= 0;j<n;j++){
				if(varr[i][j]>avail[j]) toAdd = false;
			}
				if(toAdd && check[i]){
				cout<<"Now going fro process "<<i+1<<endl;
				for(int j = 0 ;j<n;j++)	{
					avail[j] += varr[i][j];
					varr[i][j] = 0;
					check[i]=false;
				}
				p_count--;
			}
		}

		
	}
}
int main(){
  int n; cin>>n;
  vector<int> res;
  for(int i=0;i<n;i++){
  	int a ;  cin>> a;
  	res.push_back(a);
  }
  int p;
  cin>>p;
  vector<vector<int> > vec(p,vector<int>(n,0));
  for(int i=0;i<p;i++){
  	for(int j=0;j<n;j++) cin>>vec[i][j];
  }
  bankers(vec,n,p,res);
}