#include<bits/stdc++.h>
#define ll long long
#define vll vector<ll>
#define mll map<ll,ll>
#define sll set<ll>
#define fo(i,n) for(i=0;i<n;i++)
using namespace std;

ll a[1<<19];
sll s;
multiset<ll> m;
int main()
{
    ios::sync_with_stdio(false);
    //freopen("000.txt","r",stdin);

    ll n,i,j,k,t;

    cin>>n;

    k=pow(2,n);

    fo(i,k)
    {
        cin>>a[i];
        m.insert(a[i]);
    }

    m.erase(m.lower_bound(0));

    sort(a,a+k);

    vll v,v2,v3;

    while(v.size()<n)
    {
        ll b=*m.begin();
        v.push_back(b);

        v3=v2;
        v2.push_back(b);
        m.erase(m.begin());
        fo(i,v3.size())
        {
            v2.push_back(v3[i]+b);
            m.erase(m.lower_bound(v3[i]+b));
        }
    }
    fo(i,n)
        cout<<v[i]<<" ";

    return 0;
}