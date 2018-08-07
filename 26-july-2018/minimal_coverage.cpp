#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second

int m,x,y,i;
int main(){
    cin>>m;
    cin>>x>>y;
    vector<pair<int, int> >v;
    priority_queue<pair<int, pair<int, int> > >pq;
    vector<pair<int, int> > ans(m+5);
    vector< pair<int, pair<int, int> > >right(50010);
    while(x || y){
        if(x<=m && y>=0){
            v.push_back(make_pair(x,y));
        }
        cin>>x>>y;
    }
    sort(v.begin(),v.end());
    int j=0;
    for(i=0;j<v.size();i++){
        for(;v[j].ff<=i;j++){
            pq.push(make_pair(v[j].ss, make_pair(v[j].ff,v[j].ss)));
        }
        pair<int, pair<int, int> > temp;
        temp = pq.top();
        right[i] = temp;
       // cout<<temp.ff<<endl;
    }
    int prev =right[0].ff;
    ans[0]= make_pair(right[0].ss.ff, right[0].ss.ss);
    i=0;
    if(prev<m){
        for(i=1;i<=m;i++){
            int curr = max(prev,right[prev].ff);
            //cout<<curr<<endl;
            if(curr == prev){
                cout<<"No solution\n";
                return 0;
            }
            
            ans[i]=make_pair(right[prev].ss.ff, right[prev].ss.ss);
            prev = curr;
            if(curr>=m){
                break;
            }
        }
    }
    cout<<i+1<<endl;
    for(j=0;j<=i;j++){
        cout<<ans[j].ff<<" "<<ans[j].ss<<endl;
    }
    return 0;
}