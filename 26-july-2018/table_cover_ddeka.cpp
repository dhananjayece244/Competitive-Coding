#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007


string s;
ll len,i,n;

ll power(ll a, ll b) {
    
    ll res =1;
    while(b){
        if(b%2){
            res = (res * a)%mod;
            b--;
        }
        else{
            a = (a*a)%mod;
            b=b>>1;
        }
    }
    return res;
}

ll balance( string s){

    stack<char>temp;
    ll j = s.length();
    if(j>0)
        temp.push(s[0]);
    for(i=1;i<s.length();i++){
        if(s[i]==')' && !temp.empty() && temp.top()=='(')
            temp.pop();
        else
            temp.push(s[i]);
    }
    return temp.size();
}
ll fact(ll n){
    ll res = 1;
    while(n>0){
        res =(res*n)%mod;
        n--;
    }
    return res;
}

ll inverseModulo(ll n){

    return power(n, mod-2)%mod;
}
int main(){

    cin>>n;

   cin>>s;
   int len = s.length();
   int a = balance(s);
   int b = 2*n - (len+a);

   cout<<"a "<<a<<" b "<<b<<endl;
   b = b/2;
   ll ans =  (fact(2*b)*inverseModulo(fact(b+1))%mod)*inverseModulo(fact(b))%mod;

   cout<<"No of balanced parenth of size "<<2*b<<" is = "<<ans<<endl;

   ans = ans*(2*b+1)%mod;


   cout<<ans<<endl;
   return 0;

}