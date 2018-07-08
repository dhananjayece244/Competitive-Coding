#include<bits/stdc++.h>
using namespace std;

int dp[101][101];



int solve(int n, int  last){
  
  // cout<<idx<<endl;
   if(n<0)
       return 0;
     if(n==0)
      return 1;
    if(dp[n][last]!=-1)
      return dp[n][last];
    int ret=0;
    if(last==1)
    {
        ret+=solve(n-1,1);
        ret+=solve(n-2,2);
    }
    else
    {
          ret+=solve(n-2,2);
    }
    dp[n][last]=ret;
    return ret;
   
}
int main()
{
    int t;
	  cin>>t;
    int n;
	  while(t--){
	    cin>>n;
        // for (int i = 0; i < n; ++i)
        //     cin>>a[i];
    
      memset(dp,-1,sizeof dp);
    	cout<<solve(n-1,1)+solve(n-2,2)<<endl;
   }
	return 0;
}