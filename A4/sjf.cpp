#include<bits/stdc++.h>
using namespace std;

int main(){
  cout << "Enter the number of processes \n";
  int n ; cin >> n;
  vector<int> process (n);
  for(int i=0 ; i<n;i++){
    cin >> process[i];
  }
  sort(process.begin(),process.end());
  int wt = 0;
  int tat = 0;
  int avt = 0;
  for(int i =0 ;i<n;i++){
    cout << "Waiting time for process " << i+1 << " is " << wt <<endl;
    avt += wt;
    wt += process[i];
    tat += wt ;
    cout << "Turn around time for Process " << i+1 << " is " << wt <<endl;
  }
  cout << "Average waiting time is " << avt/(float)n << endl;
  cout << "Average turnaround time is " << tat/(float)n << endl;
}