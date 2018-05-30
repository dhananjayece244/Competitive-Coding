#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define ll long long int
#define pp pair<int,int>
#define ve vector
#define mod 1000000007
#define mn 500010
#define us unsigned int


int h,w,x,y,k;

int A[305][305],B[605][605];
int main()
{
	cin>>h>>w>>x>>y;

	
	for (int i = 0; i < h+x; ++i)
	{
		for (int j = 0; j < w+y; ++j)
		{
			cin>>B[i][j];
		}
		//k=i;
		/* code */
	}
	k=0;
	for (int i = 0; i < x; ++i)
	{
		for (int j = 0; j < w; ++j)
		{
			A[i][j]=B[i][j];
		}
		k=i+1;
		/* code */
	}
	int t=k, p=k;

	for (int i = h+x-1; i >(h+x-1)-(h-k) && p>0  ; --i,p--)
	{
		for (int j = y; j < w+y; ++j)
			A[i-x][j-y]=B[i][j];
		t++;
		/* code */
	}

	// for (int i = k; i < h-t; ++i)
	// {
	// 	for (int j = y; j < w+y; ++j)
	// 		A[i][j-y]=B[i+x][j] - B[i-x][j-y];
	// 		/* code */
	// }

	for (int i = 0; i < h; ++i)
	{
		for (int j = 0; j < w; ++j)
			cout<<A[i][j]<<" ";
		cout<<endl;
		/* code */
	}


	return 0;


}