#include <iostream>
#include<unordered_map>
#include<list>
using namespace std;
class Graph
{
    public:
    unordered_map<int ,list<int>> adj;
    
    void addEdge(int v,int u,bool direction)
    {
        //0 for undirected
        //1 for directed    
        adj[u].push_back(v);
        if(direction==0)
        {
            adj[v].push_back(u);
        }
        }
        void printAdjList()
        {
            for(auto i:adj)
            {
            cout<<i.first<<"->";
            for(auto j:i.second)
            cout<<j<<",";
            cout<<endl;
            }
        }
};

int main()
{
    int n;
    cout<<"enter no. of vertices"<<endl;
    cin>>n;
    int m;
    cout<<"enter no. of edges"<<endl;
    cin>>n;
      Graph g;
     for(int i=0;i<m;i++)
     {
         int u,v;
         cin>>u>>v;
         g.addEdge(u,v,0);
     }
     
     g.printAdjList();
    
}
