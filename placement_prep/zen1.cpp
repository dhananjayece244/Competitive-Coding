#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,k,i;
    char s[100];
    cin>>t;
    while(t--){
        i=0;
        cin>>n>>k;
        while(n--){
            if(k<n*26){
                s[i++]='a';
                k--;
            }
            else{
                s[i++]=k-n*26 + 'a'-1;
                k-=(k-n*26);
            }
        }
        s[i]='\0';
        cout<<s<<endl;
    }
    return 0;
}