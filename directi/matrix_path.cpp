#include<bits/stdc++.h>
using namespace std;
int t,n;
int a[101][101];
int dp[101][101];
int upper_path(){
    
    int i,j;
    dp[0][0] = a[0][0];
    for(i=1;i<n;i++){
        dp[i][0] = dp[i-1][0] + a[i][0];
    }
    for(i =1; i<n; i++){
        for(j = 1; j<i-1; j++){
            dp[i][j] = a[i][j] + min(dp[i][j-1], dp[i-1][j]);
            // cout<<i<<" "<<j<<" "<<dp[i][j]<<" "<<dp[i][j-1]<<" "<<dp[i-1][j]<<endl;
        }
        if(j<i)
            dp[i][j] = dp[i][j-1] + a[i][j]; 
    }
    return dp[n-1][n-2];
}
int lower_path(){
    
    int i,j;
    dp[0][0] = a[0][0];
    for(i=1;i<n;i++){
        dp[0][i] = dp[0][i-1] + a[0][i];
    }
    for(i =1; i<n; i++){
        if(i<n-1)
            dp[i][i+1] = dp[i-1][i+1] + a[i][i+1];
        for(j = i+2; j<n; j++){
            dp[i][j] = a[i][j] + min(dp[i][j-1], dp[i-1][j]);
        }   
    }
    return dp[n-2][n-1];
}
int main(){
    cin>>t;
    while(t--){
        cin>>n;
        
        for(int i =0;i<n;i++){
            for(int j=0; j<n;j++)
                cin>>a[i][j];
        }
        int ans1= upper_path();
        int ans2=a[n-1][n-1] + lower_path();
        // for(int i =0;i<n;i++){
        //     for(int j=0; j<n;j++)
        //         cout<<dp[i][j]<<" ";
        //     cout<<endl;
        // }
        cout<<ans1+ans2<<endl;
    }
    return 0;
}