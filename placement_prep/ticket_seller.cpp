#include <bits/stdc++.h>
using namespace std;

int n,m,x,diff, ans, cnt, temp;
int main(){
	cin>>n;
	vector<int>a;
	for (int i = 0; i < n; ++i){
		cin>>x;
		a.push_back(x);
	}
	a.push_back(0);
	sort(a.begin(),a.end(), greater<int>());

	cin>>m;
	int prev = a[0];
	for (int i = 1; i <=n; ++i)
	{
		diff = (prev-a[i]);

		if(diff*(i)<m){
			ans +=((prev*(prev+1)/2) - (a[i]*(a[i]+1))/2)*i;
			m = m-(diff*(i));
			prev = a[i];
		}else{
			cnt = m/i;
			temp = prev-cnt;
			ans += (((prev*(prev+1)/2) - (temp*(temp+1))/2))*i;
			m-=cnt*i;
			ans +=temp*m; 
		}
	}
	cout<<ans<<endl;
	return 0;
}