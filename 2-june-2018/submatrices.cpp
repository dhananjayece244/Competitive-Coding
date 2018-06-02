#include<bits/stdc++.h>
using namespace std;
int a[100005];
map<long long int,int>mp;

long long int x,y,ans,sum1,A,n,k,i,z;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    cin>>n>>k>>A;
    for(i=0;i<n;i++)
        {
            cin>>a[i];

            if(i<k-1)
                sum1+=a[i];
            else if(i==k-1)
            {

                sum1 += a[i];
                mp[sum1] +=1;

            }
            else
            {
                sum1 -= a[i-k];
                sum1 += a[i];
                mp[sum1] +=1;
            }
            
        }

    map<long long int, int>::iterator it;
    long long ans = 0;
    for(auto e:mp) {
        //cout << e.first <<" "<<e.second<< endl;
        long long got = e.first;
        if(A%got == 0) {
            long long need = A / got;
            ans = ans + mp[got] * mp[need];
        }
    }
    cout<<ans<<endl;    
    return 0;
}

