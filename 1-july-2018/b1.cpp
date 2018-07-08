#include<bits/stdc++.h>
using namespace std;

//int dp[1001][1001];

// int solve(string s1, string s2, int m, int m){
// 	if(m==0) return n;
// 	if(n==0) return m;

// 	if(s1[m-1]==s2[n-1])
// 		return solve(s1,s2,m-1,n-1);

// 	return 1+ min(solve(s1, s2, m, n-1),solve(s1,s2,m-1,n));
// }
int solve(string str1, string str2, int m, int n){
    int dp[m+1][n+1];
    for (int i=0; i<=m; i++)
    {
        for (int j=0; j<=n; j++)
        {
            if (i==0)
                dp[i][j] = j; 
 
            else if (j==0)
                dp[i][j] = i; 
 
            
            else if (str1[i-1] == str2[j-1])
                dp[i][j] = dp[i-1][j-1];
 
          
            else
                dp[i][j] = 1 + min(dp[i][j-1],  
                                   dp[i-1][j]); 
        }
    }
 
    return dp[m][n];
}
int main()
{
	string s1,s2;
	cin>>s1;
	cin>>s2;
	int l1=s1.size();
	int l2=s2.size();
	cout<<solve(s1,s2,l1,l2)<<endl;

	return 0;
}