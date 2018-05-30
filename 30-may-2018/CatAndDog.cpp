#include <bits/stdc++.h>
using namespace std;

long long int c[2001][2],d[2001][2],cat[2001];
long long int x,y,z,i,j,count1,temp,dst,prev1;

int main()
{
	cin>>x>>y;

	for (i = 0; i < x; ++i)
	{
		cin>>c[i][0]>>c[i][1];
	}
	for (i = 0; i < x; ++i)
	{
		cin>>d[i][0]>>d[i][1];
	}
	count1=0;


	for (i = 0; i < y; ++i)
	{
		//dst = (d[i][0]-c[0][0])*(d[i][0]-c[0][0]) + (d[i][1]-c[0][1])*(d[i][1]-c[0][1]); 
		
		//cat[0] +=1;
		dist = 1000000001;
		//prev1 = 0;
		//cout<<cat[0]<<endl;
		
		for (j = 0; j < x; ++j)
		{
			temp = (d[i][0]-c[j][0])*(d[i][0]-c[j][0]) + (d[i][1]-c[j][1])*(d[i][1]-c[j][1]);
		
			if(temp<dst)
			{
				dst = temp;
				prev1 = j;
			}
		}
		cat[prev1] +=1;
	}
	for (i = 0; i < x; ++i)
	{
		if(cat[i]==1)
			count1++;
		//cout<<cat[i]<<" ";
		/* code */
	}
	cout<<count1<<endl;

	return 0;
}
