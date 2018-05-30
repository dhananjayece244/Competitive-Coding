#include <bits/stdc++.h>
using namespace std;

int max1,t,n,a[101][101],temp;
int main()
{

	cin>>t;
	while(t--)
	{
		cin>>n;

		max1 = -1;
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				cin>>a[i][j];
				max1 =max(max1,a[i][j]); 
				/* code */
			}
			/* code */
		}
		for (int i = 0; i < n; ++i)
		{
			temp =0;
			for (int j = i,k=0; j < n; ++j,k++)
			{
				temp +=a[j][k];
				/* code */
			}
			max1 = max(max1, temp);
			/* code */
		}

		for (int j = 1; j < n; ++j)
		{
			temp =0;
			for (int i = j,k=0; i < n; ++i,k++)
			{
				temp +=a[k][i];
				/* code */
			}
			max1 = max(max1, temp);
			/* code */
		}

		cout<<max1<<endl;
	}
}
