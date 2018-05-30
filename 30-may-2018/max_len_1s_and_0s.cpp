#include <bits/stdc++.h>
using namespace std;


int a[100001],s[100001];
map <int, int> left_1;
map <int, int> right_1;
int max1,n,x,l,r;
char st[10000];
int main()
{
	
	cin>>n;
	cin>>st;
	for (int i = 0,x; i < n; ++i)
	{
		a[i]  = st[i]=='1'?1:-1;
	}
	s[0]=a[0];
	
	cout<<s[0]<<" ";
	for (int i = 1; i < n; ++i)
	{
		s[i] = s[i-1] + a[i];
		cout<<s[i]<<endl;
		/* code */
	}
	left_1[s[0]]=1;
	right_1[s[0]]=1;
	for (int i = 1; i < n; ++i)
	{
		if(!left_1[s[i]])
			{
				left_1[s[i]]=i+1;
				right_1[s[i]]=i+1;
			}
		else
			right_1[s[i]] = i+1;
		/* code */
	}
	max1 =0;
	for (int i = 0; i < n; ++i)
	{
		cout<<left_1[s[i]]<<" "<<right_1[s[i]]<<endl;
		if(max1<right_1[s[i]]-left_1[s[i]])
		{
			max1 =  right_1[s[i]]-left_1[s[i]];
			l=left_1[s[i]];
			r=right_1[s[i]];
		}
		/* code */
	}
	max1 = max(max1 , right_1[0]);
	cout<< max1<<"  left "<<l<<" right "<<r<< endl;
}