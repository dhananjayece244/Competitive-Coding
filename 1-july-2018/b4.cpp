#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;
ll dp[100010];
bool mem[1010][1010];
char s[100010];
int main()
{
    //freopen("input13.txt","r",stdin);
//  freopen("output13.txt","w",stdout);
      cin>>(s+1);
      
      //cout<<(s+1)<<endl;
      int n=strlen(s+1);
      for(int i=1;i<=n;i++)
      mem[i][i]=1;
      for(int i=1;i<n;i++)
      {
          if(s[i]==s[i+1]) mem[i][i+1]=1;
          else mem[i][i+1]=0;
      }
      
          for(int len=3;len<=n;len++)
        {
            for(int i=1;i<=n;i++)
      {
              int en=i+len-1;
              
              if(en<=n)
              {
                  if(s[i]==s[en] and mem[i+1][en-1]==1) 
                  { mem[i][en]=1;
                  }
              }
          }
        
    
    }
      dp[0]=1;
      for(int i=1;i<=n;i++)
      {
            for(int j=i;j>=1;j--)
            {
                
                 if(mem[j][i])
                 {
                    // cout<<"j i"<<j<<" "<<i<<endl;
                     dp[i]+=dp[j-1];
                     dp[i]%=mod;
                 }
            }
      }
      cout<<dp[n]<<endl;
      return 0;
        
}