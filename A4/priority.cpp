#include<bits/stdc++.h>
using namespace std;
//without arrival time
bool comp(pair<pair<int,int>,int> a,pair<pair<int,int>,int> b)
{
    return a.first.first < b.first.first;
}
void Priority(int N,int *burst_time,int *priority)
{
    vector<pair<pair<int,int>,int>> temp;
    vector<pair<int,int>> ans;
    for(int i=0;i<N;i++)
    {
        pair<pair<int,int>,int> t;
        t.first.first=priority[i];
        t.first.second=burst_time[i];
        t.second=i+1;
        temp.push_back(t);
    }
    sort(temp.begin(),temp.end(),comp);
    int total_timer=0;
    for(int i=0;i<N;i++)
    {
        pair<int,int> t;
        t.second=total_timer;
        total_timer+=temp[i].first.second;
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
    int burst_time[N],priority[N];
    for(int i=0;i<N;i++)
    {
        cin>>burst_time[i]>>priority[N];
    }
    Priority(N,burst_time,priority);
}