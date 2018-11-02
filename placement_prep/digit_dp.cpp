#include <bits/stdc++.h>
using namespace std;
#define ll long long int

string s;
int n;

ll dp[20][20*9+2][2];

ll solve(int pos, int sum, int tight){
	if(pos==n){
		return (sum==0);
	if(sum<0)
		return 0;
	if(dp[pos][sum][tight]!=-1)
		return dp[pos][sum][tight];
	
	if(tight==0){
		for (int i = 0; i <=9 ; ++i)
		{
			res +=solve(pos+1, sum-i, tight);
		}
	}else{
		for (int i = 0; i <=s[pos]-'0'; ++i)
		{
			int nt=0;
			if(i==s[pos]-'0')
				nt=1;
			res +=solve(pos+1, sum-i, nt);
		}
	}
	return dp[pos][sum][tight]=res;
}

int main(){

}