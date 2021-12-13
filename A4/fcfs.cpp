#include<bits/stdc++.h>
using namespace std;
//with arrival time
void FCFS(int N,int *burst_time,int *arrival_time)
{
    vector<pair<int,int>> temp,ans;
    for(int i=0;i<N;i++)
    {
        pair<int,int> t;
        t.first=arrival_time[i];
        t.second=burst_time[i];
        temp.push_back(t);
    }
    sort(temp.begin(),temp.end());
    int total_timer=0;
    for(int i=0;i<N;i++)
    {
        pair<int,int> t;
        t.second=total_timer;
        if(total_timer!=0)
            t.second-=temp[i].first;
        if(t.second<0)
            t.second=0;
        total_timer+=temp[i].second;
        t.first=total_timer;
        ans.push_back(t);
    }
    for(int i=0;i<N;i++)
    {
        cout<<"TAT for process with arrival time "<<temp[i].first<<" is "<<ans[i].first<<" and waiting time is "<<ans[i].second<<endl;
    }
}
int main()
{
    int N;
    cin>>N;
    int burst_time[N],arrival_time[N];
    for(int i=0;i<N;i++)
    {
        cin>>arrival_time[i]>>burst_time[i];
    }
    FCFS(N,burst_time,arrival_time);
}