
#include<bits/stdc++.h>
using namespace std;
string s;
#define ll long long int 
int dp[52][455][2];
bool pr[5000];
int n;
#define mod 1000000007
int solve(int pos,int tight,int sum)
{
	 //cout<<"s n "<<s<<" "<<n<<endl;

	    if(sum<0) return 0;
	 //    cout<<"pos "<<pos<<" "<<tight<<" "<<sum<<endl;
	    if(pos==n)
	    {
	    	return (sum==0);
	    }
       if(dp[pos][sum][tight]!=-1)
       	return dp[pos][sum][tight];
       ll res=0;
      // cout<<"here "<<endl;
       if(tight==0)
       {
       	   for(int i=0;i<=9;i++)
       	   {
       	   	   res+=solve(pos+1,0,sum-i);
       	   	   res%=mod;
       	   }
       }
       else
       {
       	     for(int i=0;i<=s[pos]-'0';i++)
       	     {
       	     //	cout<<"her "<<endl;
       	     	  int nt=0;
       	     	  if(i==s[pos]-'0')
       	     	  	nt=1;
       	     	  res+=solve(pos+1,nt,sum-i);
       	     	  res%=mod;
       	     }
       }
       dp[pos][sum][tight]=res;
       return res;
}
void siv()
{
 
        for(int i=2;i<=1000;i++)
        {
        	if(pr[i]==0)
        	{
        		for(int j=2*i;j<=1000;j+=i)
        			pr[j]=1;
        	}
        }

}
int main()
{
	  siv();
	  ll ans=0;
	  memset(dp,-1,sizeof(dp));
	   cin>>s;
	   n=s.length();
       //cout<<"solve "<<solve(0,1,1)<<endl;
       pr[1]=1;
       for(int i=0;i<=450;i++)
       {
       	   for(int j=i;j<=450;j++)
       	   {
                 if(pr[i+j]==0 and (i+j)!=0)
                 {
                 	 ll res1=solve(0,1,i);
                 	 ll res2=solve(0,1,j);
                 	 //cout<<"i is "<<i<<" "<<j<<" "<<res1<<" "<<res2<<endl;
                 	 ans+=(res1*res2)%mod;
                 	 ans%=mod;
                 }  
       	   }
       }
       cout<<ans<<endl;
       return 0;
}