#include<bits/stdc++.h>
using namespace std;

int main(){
	int n ; cin >> n;
	vector<int> arr(n);
	for(int i=0;i<n;i++) cin>> arr[i];
	sort(arr.begin(),arr.end());
	int crp =-1,mx = INT_MAX;
	cin >> crp >> mx;
	mx--;

	int idx =-1;
	for(int i=0;i<n;i++){
		idx =i;
		if(arr[i]>crp){
			break;
		}
	}
	int st = abs(crp - arr[idx]);
	cout << crp << " --> " << arr[idx]<<endl;
	for(int i=idx ;i<(int)arr.size()-1;i++){
		cout<< arr[i] << " --> " << arr[i+1]<<endl;
		st += abs(arr[i]-arr[i+1]);
		crp = arr[i+1];
	}
	cout<< crp <<" --> "<<arr[idx-1]<<endl;
	st += abs(crp-arr[idx-1]);
	for(int i=idx -1;i>=1;i--){
		cout << arr[i] << " --> " << arr[i-1]<<endl;
		st += abs(arr[i] - arr[i-1]);
	}
	cout<<"total seek time is : "<<st<<endl;
}