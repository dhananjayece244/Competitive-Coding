#include<bits/stdc++.h>
using namespace std;

int n,k;
int a[105];
int dp[105][102][4];
int solve(int idx, int prev, int cnt, int vect[]){
    if(cnt==4 && idx<=n){
        int s=0;
        for(int i=0;i<4;i++){
            s +=vect[i];
        }
        if(s==k){
            int b[4];
            for(int i=0;i<4;i++){
                b[i] = vect[i];
            }
            sort(b,b+4);
            for(int i=0;i<4;i++){
                cout<<b[i]<<" ";
                
            }
             cout<<"$ ";
             
             return 1;
        }    
        else
            return 0;
    }
    if(idx==n)
        return 0;
    // if(dp[idx][prev][cnt]!=-1)
    //     return dp[idx][prev][cnt];
    int res= 0;
    // if(a[idx]>=prev){
        res = solve(idx+1, prev, cnt, vect);
        vect[cnt]=a[idx];
        res += solve(idx+1, a[idx], cnt+1, vect);
    // }
    // else{
    //     res = solve(idx+1, prev, cnt, vect);
    // }
    return res;
}
int t;
int main(){

    cin>>t;
    while(t--){
    // memset(dp, -1, sizeof dp);
    cin>>n>>k;
    int vect[4] = {0};
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a, a+n);
    int ans = solve(0,-1,0, vect);
    cout<<endl;
    }
    return 0;

}