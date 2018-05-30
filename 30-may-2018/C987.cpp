#include<bits/stdc++.h>
using namespace std;

unsigned int s[3005];
unsigned int c[3005];
unsigned int n,left_cost,right_cost,min_cost;
unsigned int flag,l_flag,r_flag;

int main()
{
	cin>>n;
	for (int i = 0; i < n; ++i)
		cin>>s[i];

	for (int i = 0; i < n; ++i)
		cin>>c[i];
	flag=0;
	min_cost=INT_MAX;
	for (int i = 1; i < n-1; ++i)
	{
		left_cost=INT_MAX;
		right_cost=INT_MAX;
		l_flag=0;
		r_flag=0;

		for (int j = 0; j<i; ++j)
		{
			if(s[j]<s[i]){
				l_flag=1;
				left_cost=min(left_cost , c[j]);
			}
		}
		for (int j = i+1; j<n; ++j)
		{
			if(s[j]>s[i]){
				r_flag=1;
				right_cost= min(right_cost, c[j]);
			}
		}
	//	cout<<left_cost<<" "<<right_cost<<endl;
		if(l_flag && r_flag)
			flag=1;

		min_cost= min(min_cost, (left_cost+right_cost+c[i]));

	}

	if(flag)
		cout<<min_cost<<endl;
	else
		cout<<-1<<endl;


	return 0;

}
