#include <bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
int t, k;
string s;
bool cmp(pair<int, int>p1, pair<int, int>p2){
	if(p1.ff>p2.ff)
		return true;
	else if(p1.ff == p2.ff && p1.ss<p2.ff)
		return true;
	else
		return false;
}
int f[27],i,n;
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		cin>>s;
		memset(f, 0, sizeof f);
		for (int i = 0; i < s.length(); ++i)
		{
			f[s[i]-'a']++;
		}
		vector<pair<int, int>> v;
		for (i = 0; i < 26; ++i)
		{
			v.push_back(make_pair(f[i], i));	
		}
		sort(v.begin(), v.end(), cmp);
		// for(auto e:v){
		// 	cout<<e.ff<<" "<<e.ss<<endl;
		// }
		int cnt = 1;
		int f = v[0].ff;
		int temp = f, flag =1;
		int sss = v[0].ss;
		if(k==1){
			cout<<char(sss+'a')<<endl;
			continue;
		}else{
			for(int j=1; j<26;j++){
				f = v[j].ff;
				sss = v[j].ss;
				if(f==temp)
					continue;
				cnt++;
				// cout<<cnt<<" "<<sss<<endl;
				temp = f;
				if(cnt==k && f!=0){
					flag =0;
					cout<<char(sss+'a')<<endl;
					break;
				}
			}
			if(flag)
				cout<<"NONE"<<endl;
		}
	}
	return 0;
}