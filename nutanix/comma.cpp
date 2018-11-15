#include<bits/stdc++.h>
#define ll long long
#define M 1000000007
using namespace std;

long long power(long long a, long long b){
	if(a==0)
		return 0;
	long long temp = 1;
	while(b){
		if(b%2){
			temp = (temp *a)%M;
			b--;
		}else{
			a = (a*a)%M;
			b = b/2;
		}
	}
	return temp;
}

int main(){
	int n,k,i;
	string s;
	cin>>n>>k;
	cin>>s;
	long long sum=0, ans = INT_MIN;

	for (i = k; i <n; ++i){
		sum =sum*10 + (s[i]-'0');
	}
	ans = sum;
	// cout<<sum<<endl; 
	for (i = k-1; i >=0; --i){
		sum = sum/10;
		sum +=(power(10,n-k-1)*(s[i]-'0')); 
		ans = max(ans, sum);
		// cout<<sum<<endl;
	}
	cout<<ans<<endl;
	return 0;
}