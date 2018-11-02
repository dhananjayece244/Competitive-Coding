#include<bits/stdc++.h>
using namespace std;

int solve(int a[], int n){
    int i=0, ans=0, temp=0,tp;
    stack<int>s;
    for(i=0;i<n;){
        if(s.empty() || a[s.top()]<=a[i])
            s.push(i++);
        else{
            tp = s.top();
            s.pop();
            temp = a[tp]*(s.empty()?i:i-s.top()-1);
            ans = max(ans, temp);           
        }
    }
    while(!s.empty()){
            tp = s.top();
            s.pop();
            temp = a[tp]*(s.empty()?i:i-s.top()-1);
            ans = max(ans, temp);   
    }
    return ans;

}

int main(){
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans = solve(a, n);
    cout<<ans<<endl;
    return 0;
}