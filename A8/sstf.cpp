#include"bits/stdc++.h"
using namespace std;

int main(){
	int n ; cin >> n;
	vector<int> arr(n);
	for(int i=0;i<n;i++) cin >> arr[i];
	int crp = -1; cin >> crp;
	int st = 0;
	while((int)arr.size()){
		int mini=INT_MAX;
		int idx = -1;
		for(int i = 0;i<n;i++){
			if(abs(arr[i] - crp) < mini ){
				idx = i;
				mini = abs(arr[i] - crp);
			}
		}
		cout << crp << " --> " << arr[idx]<<endl;
		st += mini;
		crp = arr[idx];
		arr.erase(arr.begin()+idx);
	}
	cout<<"Total seek time is : "<<st<<endl;
}
