#include <bits/stdc++.h>
using namespace std;

int a[1000001];
int sum1,n,w;
bool check_1(int k)
{
	sum1=k;
	for (int i = 0; i < n; ++i)
	{
		sum1 +=a[i];
		if(sum1>w)
			return false;
		/* code */
	}
	return true;
}
bool check_2(int k)
{
	sum1=k;
	for (int i = 0; i < n; ++i)
	{
		sum1 +=a[i];
		if(sum1<0)
			return false;


		/* code */
	}
	return true;
}
int main()
{
	int k,lower,upper,l,r,mid;
	cin>>n>>w;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
		/* code */
	}
	lower= -1;
	upper= w+1;

	// check for the uppper limit
	k = 1;
	l = 0; // 0
	r = w;
	while(k++ < 40) {
		mid = (l + r) / 2;
		if(check_1(mid)) { // O(n)
			upper = mid;
			l = mid + 1;
		}else {
			r = mid - 1;
		}
	}
	// check for the uppper limit
	k = 1;
	l = 0; // 0
	r = w;
	while(k++ < 40) {
	    mid = (l + r) / 2;
		if(check_2(mid)) { // O(n)
			lower = mid;
			r = mid - 1;
		}else {
			l = mid + 1;
		}
	}
	if(upper >= lower && upper<w+1 && lower>=0)
		cout << upper  - lower + 1 << endl;
	else
		cout<< 0 <<endl;

	return 0;
}