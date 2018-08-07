#include<bits/stdc++.h>
using namespace std;

int a[101][101];
// multiset<pair<int, pair<int, int> > >ms;
int n,i,j,cnt;
bool visited[101][101];
priority_queue<pair<int, pair<int, int> > >ms;
void DFS(int x, int y, int val){

    if(x+1<n && a[x+1][y]<= val && !visited[x+1][y]){
        visited[x+1][y] = true;
        DFS(x+1, y, a[x+1][y]);
    }
     if(x-1>=0 && a[x-1][y]<= val && !visited[x-1][y]){
        visited[x-1][y] = true;
        DFS(x-1, y, a[x-1][y]);
    }
     if(y+1<n && a[x][y+1]<= val && !visited[x][y+1]){
        visited[x][y+1] = true;
        DFS(x, y+1, a[x][y+1]);
    }
     if(y-1>=0 && a[x][y-1]<= val && !visited[x][y-1]){
        visited[x][y-1] = true;
        DFS(x, y-1, a[x][y-1]);
    }
}

int main(){

    cin>>n;
    memset(visited, false, sizeof visited);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>a[i][j];
            ms.push(make_pair(a[i][j],make_pair(i,j)));
        }
    }
    while(!ms.empty()){
      
       pair<int, pair<int, int > > e;
       e = ms.top() ;
       int curr_x = e.second.first;
       int curr_y = e.second.second;
       int v = e.first;
       ms.pop();
       if(!visited[curr_x][curr_y]){
           visited[curr_x][curr_y] = true;
           cout<<curr_x<<" "<<curr_y<<endl;
           cnt++;
           DFS(curr_x, curr_y, v);
       }
    }
    cout<<cnt<<endl;
    return 0;
    
}