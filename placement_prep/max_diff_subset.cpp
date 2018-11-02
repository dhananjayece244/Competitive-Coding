#include <bits/stdc++.h>
using namespace std;
int n;

int power(int a, int b){
	int ans =1;
	while(b){
		if(b%2){
			ans = ans*a;
			b--;
		}else{
			a = a*a;
			b = b>>1;
		}
	}
	return ans;
}

int main(){
	cin>>n;
	int a[n+1];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	int ans=0;
	for (int i = 0; i < n; ++i){

		ans = ans + (a[i]*((power(2,i)-1)) - a[i]*(power(2,n-1-i)-1));
		// cout<<a[i]<<" "<<(power(2,i)-1) << " "<< power(2,n-1-i)-1<<" " <<ans<<endl;
	}
	cout<<ans<<endl;
	return 0;
}