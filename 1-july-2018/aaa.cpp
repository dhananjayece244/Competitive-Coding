#include<bits/stdc++.h>
 
using namespace std;

int dp[200005]; 
int n,k,size;
int a[200005];
map<int,int> mp;
 
int same(int pos, int k)
{
 
  if(k==0)
  return 1;
 
  if(pos>=size)
  return 0;
 
  
  if(dp[pos]!=-1)
    return dp[pos];

  long long int res;

  if((pos+1)!=size)
  {
  if(mp[a[pos]] < a[pos+1])
  {
 
    res= ((1+same(pos+1,k-1)+same(pos+1,k))%1000000007);
  }
  else
  {
    res= same(pos+1,k)%1000000007;
  }
  }
  else
  res=0;
  
  return dp[pos] = res ;
 
}
int main()
{
   
  int t,i,j,x,y;
   
  cin>>t;
   
  for(i=0;i<t;i++)
  {
   
  cin>>n>>size;

  for(j=0;j<n;j++)
  {
    cin>>x>>y;
    a[j]=x;
    mp[x]=y;
   
  }
   
  x=0;
   memset(dp,-1, sizeof dp);
  // for(j=0;j<(n-k+1);j++)
  // { 
  //  x=x%1000000007+same(mp,a,j,k,n);
  // }
  cout<<same(0,size)<<endl;
  }
return 0;
}