#include<bits/stdc++.h>
using namespace std;
string s;
int dp[101][101];

int solve(int i, int j){

    if(i>j)
        return 0;
    if(i==j)
        return 1;

    if(dp[i][j]!=-1)
        return dp[i][j];

    int res = INT_MAX;
    if(s[i]==']' || s[i]==')')
        res = min(res, 1 + solve(i+1, j));
    else{
        res = min(res, 1 + solve(i+1,j));

        for(int k = i+1; k<=j ; k++){
            if((s[i]=='(' && s[k] == ')') || (s[i] == '[' && s[k]==']')){
                res = min(res, solve(i+1, k-1) + solve(k+1, j));
            }
        }
    }
    return dp[i][j] = res;
}

int main(){
    cin>>s;

    int n = s.length();
    memset(dp, -1, sizeof dp);

    cout<<solve(0,n-1)<<endl;


}