#include <bits/stdc++.h>
#include <queue>
using namespace std;
int main() {
	set<pair<int,int>> empty;
	set<pair<int,int>> filled;
	int n;
	cin>>n;
	for(int i = 0,x; i < n; ++i) {
		cin >> x;
		// empty.insert(make_pair(x,i+1));
		empty.insert(pair<int,int>(x,i+1));
	}
	char c;
	for (int i = 0; i < (2*n); ++i) {
		cin >> c;
		if(c == '0') {
			cout<<(*empty.begin()).second<<" ";
			filled.insert(make_pair( (*empty.begin()).first , (*empty.begin()).second ));
			empty.erase(empty.begin());
		}
		else{
			cout<<(*filled.rbegin()).second<<" ";
			filled.erase(*filled.rbegin());
		}
	}
	return 0;
}