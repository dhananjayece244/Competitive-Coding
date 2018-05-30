#include <bits/stdc++.h>
using namespace std;

int A[501][501],B[501][501];
int i,j,k,l,sum1=0,count1,n,m;

int main()
{
	cin>>n>>m;
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < m; ++j)
		{
			cin>>A[i][j];
			B[i][j]=0;
			/* code */
		}
		/* code */
	}
	cin>>k;
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < m; ++j)
		{
			if(j==0)
				B[i][j] = A[i][j];
			else
				B[i][j] = B[i][j-1] + A[i][j];

			//cout<<B[i][j]<<" ";
		}
			//cout<<endl;
	}
		
	// for (i = 0; i < n; ++i)
	// {
	// 	for (j = k; j < m; ++j)
	// 	{
	// 		B[i][j] = B[i][j-1] + A[i][j];
	// 		cout<<B[i][j]<<" ";


	// 	}
	// 	cout<<endl;

	// 	/* code */
	// }
	count1=0;

	for (i = k-1; i < n; ++i)
	{
		for (j = k-1; j < m; ++j)
		{
			sum1=0;

			for (l = 0; l < k; ++l)
			{
				if(j==k-1)
					sum1 += B[i-l][j];
				else
					sum1  += B[i-l][j] - B[i-l][j-k];

			}
			//cout<<sum1<<endl;

			if(sum1>=(k*k/2))
				count1++;
		}
		/* code */
	}
	cout << count1 <<endl;

	return 0;
}