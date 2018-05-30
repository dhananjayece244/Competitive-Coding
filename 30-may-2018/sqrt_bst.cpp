#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long int i,j,l,r,A,mid;
  cin>>A;
    l=0;
    r=A;
    while(l<=r)
    {
        mid = (l+r)/2;
        if(mid*mid==A)
            {
                cout<<mid<<endl;
                return mid;
            }
        else if(mid*mid>A && (mid-1)*(mid-1)<A)
            {
               cout<<mid-1<<endl;
                return mid-1;
            }
        else if(mid*mid>A)
            r=mid-1;
        else if(mid*mid<A)
            l=mid+1;
    }
    
}