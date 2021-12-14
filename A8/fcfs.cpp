#include<bits/stdc++.h>
using namespace std;

int main(){
	int n ; cin >> n;
	vector<int> process(n);
	for(int i=0;i<n;i++){
		cin >> process[i];
	}
	int crp = -1;
	cin >> crp;
	int st =0;
	st += abs(crp-process[0]);
	cout << crp << " --> " <<process[0]<<endl;
	crp = process[0];
	for(int i=0;i<n-1;i++){
		st +=abs(process[i]-process[i+1]);
		cout << crp << " --> " << process[i+1]<<endl;
		crp = process[i+1];
	}
	cout << "Total seek time is : "<<st <<endl;
}