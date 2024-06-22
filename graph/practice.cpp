// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     vector<int> adj[n+1];

//     for (int i = 0; i < m; i++)
//     {
//         /* code */
//         int u, v;
//         cin >> u >> v;

//        adj[u].push_back(v);
//        adj[v].push_back(u);
//     }
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// Problem Statement: Given an undirected graph, return a vector of all nodes by traversing the graph using breadth-first search (BFS).

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public: 
    vector<int> bfsOfGraph(int V, vector<int> adj[]){
        int visit[V] = {0};
        visit[0] = 1;
        queue<int> q;
        q.push(0);
        vector<int> bfs;

        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            bfs.push_back(node);

            for (auto it:adj[node])
            {
                if(!visit[it]){
                    visit[it] = 1;
                    q.push(it);
                }
            }
            
        }
        return bfs;
    }
};

void addedge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printAns(vector<int> &ans){
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}

int main(){
    vector<int> adj[6];
    addedge(adj, 0, 1);
    addedge(adj, 1, 2);
    addedge(adj, 1, 3);
    addedge(adj, 0, 4);

    Solution obj;
    vector<int> ans = obj.bfsOfGraph(5, adj);
    printAns(ans);

    return 0;
}