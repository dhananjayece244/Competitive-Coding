#include <bits/stdc++.h>
using namespace std;
vector<int> g[100005];
bool vis[100005];
int n,m;
int ans = 0;
int evenTree(int root) {
    vis[root] = true;
    int cnt = 1;
    for(int v:g[root]) {
        if(!vis[v])
            cnt += evenTree(v);
    }
    vis[root] = false;
    if(cnt%2 == 0) {
        ans++;
        //cout << "root = "<<root<< " ans  = "<<ans << endl;
        return 0;
    }else return cnt;
}
int main() {
    cin >> n;
    int u,v;
    for(int i = 0;i<n-1;i++) {
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    evenTree(1);
    cout << ans  - 1 << endl;
    return 0;
}
