#include <bits/stdc++.h>
using namespace std;

int main()
{
      long long int n,x,k,ans;
      cin>>n>>k>>x;
      ans = 1;
      if(n==3 )
        {
            if(k==2 && x==1)
                ans = 1;
            else if(x==1)
                ans = (k-1)%1000000007;
            else
                ans = (k-2)%1000000007;
        }
      else
      {
          for (int i = 1; i < n-3; ++i)
          {
            ans = (ans*(k-1))%1000000007;
          }
          ans = (ans*(k-2)*(k-2) + ans*(k-1))%1000000007;
      }
      cout<<ans<<endl;

      return 0;

   
    
}