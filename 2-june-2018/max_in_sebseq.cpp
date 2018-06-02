#include<bits/stdc++.h>
using namespace std;
int a[100005];
int n,k;

map<int,int>mp;
set<int>s;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i = 0; i < k-1; ++i){
        mp[a[i]]++;
    }
    for(auto c:mp){
        if(c.second==1)
            s.insert(c.first);
    }
    for (int i = k-1; i < n; ++i)
    {
        mp[a[i]]++;
        if(mp[a[i]]==1)
            s.insert(a[i]);
        else
            s.erase(a[i]);
        if(s.empty()){
            cout<<"Not Exist\n";
        }
        else
            cout<<*s.rbegin()<<endl;

        mp[a[i-k+1]]--;
        if(mp[a[i-k+1]]==1)
            s.insert(a[i-k+1]);
        else
            s.erase(a[i-k+1]);
        
    }
    
    
    return 0;
}

