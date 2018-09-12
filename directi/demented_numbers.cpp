#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool mp[1000];
bool visited[1000];
bool check(ll x){
    if(x==1)
        return true;
    if(visited[x])
        return mp[x];
    
    visited[x] = true;
    ll temp=0;
    ll temp1 = x;
    while(x){
        temp +=(x%10)*(x%10);
        x /=10;
    }
    return mp[temp1] = check(temp);
}

ll t,a,b;

int main(){

    cin>>t;
    int ans=0;
    while(t--){
        ans =0;
        cin>>a>>b;
        for(ll i=a; i<=b; i++){
            ll temp = 0;
            ll x=i;
            while(x){
                temp +=(x%10)*(x%10);
                x /=10;
            }
            if(check(temp)){
                // cout<<i<<" ";
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}