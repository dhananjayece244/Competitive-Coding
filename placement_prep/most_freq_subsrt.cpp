#include <bits/stdc++.h>
using namespace std;

string s;

int min_len, max_len, max_freq, n, ans=0,cnt,i;
int main(){
	cin>>s;
	n = s.length();
	int h[27]={0};
	
	map<string, int>mp;

	cin>>min_len>>max_len>>max_freq;
	for(i = 0; i < min_len; ++i){
		h[s[i]-'a']++;
	}

	for (; i <=n; ++i)
	{
		cnt=0;
		for (int j = 0; j < 26; ++j)
		{
			if(h[j])
				cnt++;
		}
		if(cnt<=max_freq){
			string temp = s.substr(i-min_len, min_len);
			mp[temp]++;
			ans++;
		}
		if(i==n)
			break;

		h[s[i-min_len]-'a']--;
		h[s[i]-'a']++;
	}
	int t=0;
	for(auto e:mp){
		if(e.second>t){
			t=e.second;
		}
	}
	cout<<t<<endl;
	return 0;
}