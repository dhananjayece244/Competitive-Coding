#include <bits/stdc++.h>
using namespace std;
long long _left[1000][1000];
long long _right[1000][1000];
long long _top[1000][1000];
long long _down[1000][1000];
long long t,n,m,a[1001][1001],temp;
int main() {
	cin>>t;
	while(t--){
		cin>>n>>m;
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				cin>>a[i][j]; 
			}
		}
		for (int i = 0; i < n; ++i) {
			int max_so_far = INT_MIN, max_ending_here = 0;
			for (int j = 0; j < m; ++j) {
				max_ending_here = max(max_ending_here + a[i][j],a[i][j]);
		        _left[i][j]=max_ending_here;
			}
		}
		for (int i = 0; i<n; ++i) {
			int max_so_far = INT_MIN, max_ending_here = 0;
			for (int j = m-1; j >=0; --j) {
				max_ending_here = max(max_ending_here + a[i][j],a[i][j]);
		        _right[i][j]=max_ending_here;
			}
		}
		for (int i = 0; i < m; ++i) {
			int max_so_far = INT_MIN, max_ending_here = 0;
			for (int j = 0; j < n; ++j) {
				max_ending_here = max(max_ending_here + a[j][i],a[j][i]);
				_top[j][i]=max_ending_here;
			}
		}
		for (int i = 0; i <m; ++i) {
			int max_so_far = INT_MIN, max_ending_here = 0;
			for (int j = n-1; j >=0; --j) {
				max_ending_here =max(max_ending_here + a[j][i],a[j][i]);
		        _down[j][i]=max_ending_here;
			}

		}
		long long max1=LLONG_MIN;
		for (int i = 1; i < n-1; ++i) {
			for (int j = 1; j < m-1; ++j) {
				max1 = max(max1, (_right[i][j+1] + _left[i][j-1] +_top[i-1][j] + _down[i+1][j] + a[i][j])*1LL );	 
			}
		}
		cout <<max1<<endl;
   }
   return 0;
}