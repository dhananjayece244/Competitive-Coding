#include <bits/stdc++.h>
using namespace std;

string s;

int main(){
	int n;
	cin>>s;
	n = s.length();
	int z[n+1]={0};
	int ans = n;
	for (int i = 1, l=0, r=0; i < n; ++i)
	{
		if(i<=r)
			z[i] = min(r-i+1, z[i-l]);

		while(i+z[i]<n && s[z[i]]==s[i+z[i]])
			++z[i];
		
		ans +=z[i];

		if(i + z[i] - 1 >r) // z[i] > r - i + 1
			l = i, r=i + z[i] - 1;

	}
	cout<<ans<<endl;

	return 0;

}