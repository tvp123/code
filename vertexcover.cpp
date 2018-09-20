#include<iostream>
#include<string>
using namespace std;

void add_edge(bool **graph,int x, int y ,int n){
        if(x<=n && y<=n){
        graph[x][y]=1;
        graph[y][x]=1;
        
        
        }
        else
            cout<<"error";
    }


bool ifZero(bool **graph,int n){
    for(int i=0;i<n;i++){
        for(int j=0 ;j<n;j++){
            if(graph[i][j]!=0)return 0;
            else return 1;}
        }}


bool **updatedGraph(int u, bool **graph,int n) { // this function creates new graph when a vertex is deleted


    for(int i=0; i<n; i++)
        graph[u][i]=0;

    for(int i=0; i<n; i++)
        graph[i][u]=0;

    return graph;
}

bool vertex_cover(bool **graph, int k,int n){ // this fuction returns true if graph have vetexcover of size k
    if(k==0)
        return ifZero(graph,n);
    int u,v;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if(graph[i][j]==1){
                u=i;
                v=j;
                break;
            }
        }
    }
    
    vertex_cover(updatedGraph(u, graph,n) ,k-1,n);
    vertex_cover(updatedGraph(v, graph,n), k-1,n);    
}
int main(int argc, char const *argv[])
{
    
    int n;
    cin>>n;            // number of vertices in the connected graph
    int k;
    cin>>k;         //parameter k

    bool graph[1000][1000]={0};

    add_edge(graph,2,3,n); // add as many edges you want
    cout<<vertex_cover(graph, k,n);

    

    return 0;
}