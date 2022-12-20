#include<bits/stdc++.h>
using namespace std;
unordered_map<int,list<pair<int,int>>> adj;

void AddEdge(int src,int dest,int weight)
{
    adj[src].push_back(make_pair(dest,weight));
}
void Printlist()
{
    for (auto i:adj)
    {
        cout<<i.first<<":";
            for(auto j:i.second)
            {
                cout<<"("<<j.first;
                cout<<","<<j.second<<")";
            }
            cout<<endl;
        }
}
int main()
{
    AddEdge(1,2,10);
    AddEdge(1,3,15);
    AddEdge(1,4,20);
    AddEdge(2,5,25);
    AddEdge(2,3,30);
    Printlist();
    return 0;
}
