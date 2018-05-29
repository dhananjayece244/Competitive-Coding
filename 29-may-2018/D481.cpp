#include <bits/stdc++.h>
using namespace std;
int dx[3] = {1,0,-1};
int main() {
	int n;
	int a[100009];
	cin >> n;
	for(int i=0;i<n;i++) {
		cin >> a[i];
	}
	if(n == 1 or n == 2) {
		cout << 0 << endl;
		return 0;
	}
	int x = a[0];
	int y = a[1];
	vector<pair<int,int>> diffs;
	for(int i = 0;i<3;i++) {
		for(int j = 0;j<3;j++) {
			diffs.push_back(make_pair(dx[i],dx[j]));
		}
	}
	bool possible = false;
	int ans = 1e8;
	for(auto pattern : diffs) {
		int change_cnt = 0;
		int gap = ( a[1] + pattern.first ) - ( a[0] + pattern.second );
		if(pattern.second != 0) {
//			cout << " ok4 " << endl;
			change_cnt++;
		}
		if(pattern.first != 0) {
//			cout << " ok5 " << endl;
			change_cnt++;
		}
		



//		cout << pattern.first <<" "<<pattern.second<<" "<<gap<<endl;
//		cout <<" change_cnt "<<change_cnt << endl;
		int prev = a[1] + pattern.first;
		for(int i = 2;i<n;i++) {
			int delta = 0;
			if( (a[i] - prev) == gap) {
				prev = a[i] + delta;
				//cout << " fine " << endl;
			}else {
				if((a[i] + 1 - prev) == gap) {
					delta = 1;
					change_cnt++;
//					cout << " ok1 "<< endl;
				}else if((a[i] - 1 - prev) == gap) {
					delta = -1;
					change_cnt++;
//					cout << " ok2 "<< endl;
				}else {
					break;
				}
			}
			if(i == (n - 1)) {
				possible = true;
				ans = min(ans,change_cnt);
			}
			prev = a[i] + delta;
		}
//		cout << endl << endl<< endl;
	}
	if(possible) {
		cout << ans << endl;
	}else {
		cout << -1 << endl;
	}
	return 0; 
}