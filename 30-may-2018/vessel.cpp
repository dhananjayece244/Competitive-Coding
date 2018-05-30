#include <bits/stdc++.h>
using namespace std;
int h[100009];
int trail[100009]; // will help to locate the minimum bar positions
int main() {
	int n,k,l;
	cin >> n >> k >>l;
	for(int i = 0;i<n*k;i++) cin >> h[i];
	int M = n*k;
	sort(h,h+M);
	int good_lengths = 0;
	for(int i = 0;i<M;i++)
		if(abs(h[0] - h[i]) <= l) good_lengths++;
	long long ans = 0;
	if(good_lengths < n) ans = 0;
	else {
		good_lengths  = good_lengths - n;
		for(int i = 0;i<n;i++) trail[i]++;
		// now fix the positions of the min bars
		for(int i = 0;i<n;i++) {
			if( (k - 1) <= good_lengths ) {
				good_lengths = good_lengths - (k - 1);
				trail[i] = trail[i] + (k - 1);	
			}else {
				trail[i] = trail[i] + good_lengths;
				break;
			}
		}
	 	for(int i = 0,next_min_at = 0;i<n;i++) ans += h[next_min_at]; next_min_at += trail[i];
	}
 	cout << ans << endl;
	return 0;
}