#include <bits/stdc++.h>
using namespace std;

vector<int> adj[10];
int visited[10];  

void bfs(int s) {
    queue<int> q;
    q.push(s);
    visited[s] = 1;

    while(!q.empty()) {
        int u = q.front();
        q.pop();
        cout << u << " ";

        for(int v : adj[u]) {
            if(visited[v] == 0) {
                visited[v] = 1;
                q.push(v);
            }
        }
    }
}

int main() {
    int n, e;
    cin >> n >> e;
    for(int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    memset(visited, 0, sizeof(visited));

    bfs(0);
}
