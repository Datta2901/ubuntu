// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends



class Solution
{
    public:
    bool dfs(int node,vector<int> adj[],vector<int> &vis,vector<int> &dfsVis){
        vis[node] = 1;
        dfsVis[node] = 1;
        for(auto i : adj[node]){
            if(!vis[i]){
                if(dfs(i,adj,vis,dfsVis)){
                    return true; // contains any cycle
                }
            }else if(dfsVis[i]){
                //visited from again the same node without completing this dfs call
                // so it has a cycle 
                return true;
            }
        }
        dfsVis[node] = 0;//After completion of a dfs call making this as 0
        return false;
    }
	//Function to detect cycle in a directed graph.
	bool isCyclic(int vertices, vector<int> adj[]) 
	{
	   	vector<int> vis(vertices + 1,0),dfsVis(vertices + 1,0);
        for(int i = 0; i < vertices; i++){
            if(!vis[i]){
                if(dfs(i,adj,vis,dfsVis)){
                    return true;
                }
            }
        }

    return false;
	}
};

// { Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    	}

    	Solution obj;
    	cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

  // } Driver Code Ends