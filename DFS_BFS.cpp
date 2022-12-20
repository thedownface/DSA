#include <iostream>
#include<bits/stdc++.h>
using namespace std;

unordered_map<int,list<int>> m;
unordered_map<int,bool> visited;


void AddEdge(int src,int dest)
{
    m[src].push_back(dest);
}

void DFS(int v)
{
    visited[v]=true;
    cout<<v<<" ";
    list<int>:: iterator i;
    for(i=m[v].begin();i!=m[v].end();i++)
    {
        if(!visited[*i])
        {
            DFS(*i);
        }
    }
}

void BFS(int v)
{
    list<int> queue;
    vector<int> visit={false};
    visit[v]=true;
    queue.push_back(v);
    
    while(!queue.empty())
    {
        v=queue.front();
        cout<<v<<" ";
        queue.pop_front();
        for(auto i:m[v])
        {
            if(!visit[i])
            {
                visit[i]=true;
                queue.push_back(i);
            }
        }
    }
    
    
    
}
int main() {
    AddEdge(0,1);
    AddEdge(0,2);
    AddEdge(1,2);
    AddEdge(2,0);
    AddEdge(2,3);
    AddEdge(3,3);
    cout<<"THE FOLLOWING IS BFS IMPLEMENTATION :"<<endl;
    BFS(2);
    cout<<endl;
    cout<<"THE FOLLOWING IS DFS IMPLEMENTATION :"<<endl;
    DFS(2);
}
