#include<bits/stdc++.h>
using namespace std;

int n, a[200005];
map<int, int>mp;
int temp, largest_num;

int main(){

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]] = max(mp[a[i]], mp[a[i]-1] + 1);
        if(temp<mp[a[i]]){
            largest_num = a[i];
            temp = mp[a[i]];
         }
    }
    cout<<temp<<endl;
    int start = largest_num - temp+1;
    for(int i=0;i<n;i++){
        if(a[i]==start){
            cout<<i+1<<" ";
            start++;
        }
    }
    cout<<endl;

    return 0;
    
}