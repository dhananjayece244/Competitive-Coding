#include<bits/stdc++.h>
using namespace std;
long long int n,p,q,r,temp_r,temp_p, temp_q,sum_1,sum_2,sum_3,sum,a[100001];
int main()
{
	cin>>n>>p>>q>>r;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
		/* code */
	}

	sum_1 = 1LL*p*a[0];
	sum_2 = 1LL*q*a[0];
	sum_3 = 1LL*r*a[0];
	temp_p=0;
	temp_q=0;
	temp_r=0;
	for (long long int i = 1; i < n; ++i)
	{
		if(sum_3 < 1LL*r*a[i] )
		{
			sum_3 = 1LL*r*a[i];
			temp_r=i;

			if(sum_2 < 1LL*q*a[i]) {
				sum_2 = 1LL*q*a[i];
				temp_q=i;
				if(sum_1 < 1LL*p*a[i])
				{
					sum_1=1LL*p*a[i];
					temp_p=i;
				}
			}
		}
		cout<<sum_1<<" "<<sum_2<<" "<<sum_3<<endl; 

		/* code */I inquired with the academic office about this. As
per their response, this has happened because th
	}
	cout<<temp_p<<" "<<temp_q<<" "<<temp_r<<endl; 
	sum = sum_1 + sum_2 + sum_3;
	cout<<sum<<endl; 
	return 0;
}