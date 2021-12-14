#include"bits/stdc++.h"
using namespace std;

int main(){
	srand(time(NULL))	;
	int n ; cin >> n;
	vector<int> fsize(n);
	vector<vector<int>> file;
	for(int i=0;i<n;i++){
		cin >> fsize[i];
	}

	for(int i=0;i<n;i++){
		vector<int> arr;
		for(int j = 0; j<fsize[i];j++){
			arr.push_back(rand()%100);
		}
		file.push_back(arr);
	}
	for(int i=0;i<(int)file.size();i++){
		for(int j = 0 ;j<(int)file[i].size();j++){
			cout<<file[i][j]<<" --> ";
		}
		cout<<"NULL\n";
	}
}