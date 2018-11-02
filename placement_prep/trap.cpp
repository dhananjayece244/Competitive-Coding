#include<bits/stdc++.h>
#define lli long long int;
 
using namespace std;
 
vector<int> prime_count;
 
void seive(int size){
	prime_count = vector<int>(size, 1);
	prime_count[0] = 0;
	prime_count[1] = 0;
	for (int i = 2; i*i < prime_count.size(); ++i)
	{
		if(prime_count[i]){
			for (int j = 2; j*i < prime_count.size(); ++j)
			{
				prime_count[i*j]=0;
			}
		}
	}
	for (int i = 1; i < prime_count.size(); ++i)
	{
		prime_count[i] = prime_count[i] + prime_count[i-1];
	}
}
 
int main(){
	seive(100100);
	int r1, r2;cin>>r1>>r2;
	int n;cin>>n;
	string str;cin>>str;
	vector<int>steps(n+prime_count[n+1]);
	for(int i=n;i<steps.size();i++)
		steps[i] = INT_MAX;
	steps[n-1] = 0;
	if(str[n-1] == '*')
		steps[n-1] = INT_MAX;
	for(int i=n-2;i>=0;i--) {
		if(str[i] == '*'){
			steps[i] = INT_MAX;
			continue;
		}
		steps[i] = min(steps[i+1], steps[i+2]) + 1;
		if(prime_count[i+1]*r2 >= (i+1)*r1)
			steps[i] = min(steps[i], 1 + steps[i+prime_count[i+1]]);
	}
	cout<<steps[0]<<endl;
}