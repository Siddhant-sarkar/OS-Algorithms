#include<bits/stdc++.h>
using namespace std;
void SJF(int N,int *burst_time)
{
    vector<pair<int,int>> temp,ans;
    for(int i=0;i<N;i++)
    {
        pair<int,int> t;
        t.first=burst_time[i];
        t.second=i+1;
        temp.push_back(t);
    }
    sort(temp.begin(),temp.end());
    int total_timer=0;
    for(int i=0;i<N;i++)
    {
        pair<int,int> t;
        t.second=total_timer;
        total_timer+=temp[i].first;
        t.first=total_timer;
        ans.push_back(t);
    }
    for(int i=0;i<N;i++)
    {
        cout<<"TAT for process P"<<temp[i].second<<" is "<<ans[i].first<<" and waiting time is "<<ans[i].second<<endl;
    }
}
int main()
{
    int N;
    cin>>N;
    int burst_time[N];
    for(int i=0;i<N;i++)
    {
        cin>>burst_time[i];
    }
    SJF(N,burst_time);
}