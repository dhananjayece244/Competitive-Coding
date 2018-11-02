#include<bits/stdc++.h>
using namespace std;

int prm_count[100005]={0};
void no_prime(){
    bool prm[100005];
    memset(prm, true, sizeof prm);
    prm[0]=prm[1]=false;
    for(int i=2;i<100005;i++){
        if(prm[i]){
            for(int j=i*2;j<10005;j+=i)
                prm[j]=false;
        }
    }
    for(int i=2;i<100005;i++){
        if(prm[i])
            prm_count[i] = prm_count[i-1] + 1;
        else
            prm_count[i] = prm_count[i-1];
    }
}
int t, r1,r2,n,z,A;
string s;


long long int solve(int idx, long long int dp[]){
    if(idx==n)
        return 0;
    if(idx>n)
        return 100001;
    // cout<<dp[idx]<<endl;
    if(dp[idx]!=-1)
        return dp[idx];
    if(s[idx-1]!='*'){
        dp[idx] = 1 + min(solve(idx+1, dp), solve(idx+2, dp));
        A = prm_count[idx];
        double z = (A*1.0)/(idx*1.0) - (r1*1.0)/(r2*1.0);
        // cout<<idx<<" "<<z<<endl;
        if(z>=0){
            dp[idx] = min(dp[idx], 1 + solve(idx + A, dp));
        }
    }
    else 
       dp[idx]=100001;
    // cout<<"idx "<<idx<<" "<<dp[idx]<<endl;
    return dp[idx];
}
int main(){
    cin>>t;
    no_prime();
  
    // for(int i=0;i<20;i++)
    //     cout<<i<<" "<<prm_count[i]<<endl;
    
    while(t--){
        cin>>r1>>r2;
        cin>>n;
        cin>>s;

        long long int dp[n+1];
        memset(dp, -1, sizeof dp);

       long long int ans = solve(1,dp);
       if(ans<100001)
          cout<<ans<<endl;
       else 
          cout<<"No way!"<<endl;
    }
    return 0;
}