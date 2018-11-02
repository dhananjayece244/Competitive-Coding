#include <bits/stdc++.h>
using namespace std;
int z[200009];
int total[200009];
int cnt[200009];
int main() {
	string s;
	cin >> s;
	int n = (int)(s.length());
	for(int i = 1,l = 0,r = 0;i<n;i++) {
		if(i <= r) 
			z[i] = min(z[i - l],r - i + 1);
		while(i + z[i] < n and s[z[i]] == s[i + z[i]]) {
			++z[i];
		}
		if(i + z[i] - 1 > r) {
			l = i;
			r = i + z[i] - 1;
		}
	}
	z[0] = n;
	for(int i = 0;i<n;i++) {
		cnt[z[i]]++;
	}
	for(int i = 200001;i >= 0;i--) {
		total[i] = cnt[i] + total[i + 1];
	}
	vector<pair<int,int>> ans;
	for(int i = 0;i<n;i++) {
		if(n - i == z[i]) {
			ans.push_back(make_pair(z[i],total[z[i]]));
		}
	}
	sort(ans.begin(), ans.end());
	cout << (int)ans.size() << endl;
	for(auto x:ans) {
		cout << x.first <<" "<<x.second<<endl;
	}
}