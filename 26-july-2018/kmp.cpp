#include<bits/stdc++.h>
using namespace std;

void computeLSP(string pattern, int m, int lsp[]){
    int len =0;
    lsp[0]=0;
    int i=1;
    while(i<m){
        if(pattern[i]==pattern[len]){
            len++;
            lsp[i]=len;
            i++;
        }
        else{
            if(len){
                len = lsp[len-1];
            }
            else{
                lsp[i]=0;
                i++;
            }
        }
    }
}


void KMPSearch(string str, string pattern){
    int n = str.length();
    int m = pattern.length();

    int lsp[m+1];
    computeLSP(pattern, m, lsp);

    int i=0;
    int j=0;
    while(i<n){
        if(pattern[j]==str[i]){
            j++;
            i++;
        }
        if(j==m){
            cout<<"Found at index "<<i-j<<endl;
            j = lsp[j-1];
        }
        else if(i <n && pattern[j]!=str[i]){
            if(j!=0){
                j = lsp[j-1];
            }
            else{
                i = i+1;
            }
        }
    }
}


int main(){
    string str;
    string pattern;

    cin>>str;
    cin>>pattern;

    KMPSearch(str, pattern);

    return 0;
    
}