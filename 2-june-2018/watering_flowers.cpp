#include <bits/stdc++.h>
using namespace std;

bool possible(int a[], int h, int w, int m){
	
	int j=w-1;
	for (int i = 0; i < n; ++i)
	{
		if(a[i]<h && i<j){
			m=h-a[i];
			j=i+w-1;

		}
	}
}

int main() {
	cin>>n>>m>>w;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
		if(a[i]<minm)
			minm=a[i];
	}
	l=minm;
	r=minm+m;

	while(k++<40){
		mid = (l+r)/2;
		if(possible(a,mid-minm,w,m))
		{
			ans=mid;
			l=mid+1;
		}
		else
			r=mid-1;
	}

	cout<<ans<<endl;

	return 0;
} 