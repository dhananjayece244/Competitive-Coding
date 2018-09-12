#include<bits/stdc++.h>
using namespace std;

int n,k;
int a[105];
int dp[105][102][4];

int t;
map<int, int>mp;
int main(){

    cin>>t;
    while(t--){
    // memset(dp, -1, sizeof dp);
    cin>>n>>k;
    int vect[4] = {0};
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    sort(a, a+n);
    multimap<int, pair<int, int> > mp;

    for(int i=0; i<n;i++){
        for(int j =i+1; j<n; j++){
           mp.insert(make_pair(a[i]+a[j], make_pair(a[i],a[j])));
           
    }
    cout<<endl;
    }
    return 0;

}