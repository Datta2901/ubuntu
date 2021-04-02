void dfs(int v) {
    visited[v] = true;
    for (int u : adj[v]) {
        if (!visited[u]){
            cout << u << " ";
            dfs(u);
        }
    }
    cout << endl;
}
