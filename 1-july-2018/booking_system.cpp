//http://codeforces.com/contest/416/problem/C

#include<bits/stdc++.h>
#define ll unsigned long long int
#define mod 1000000007
#define mll map<ll,ll>
#define sll set<ll>
#define fo(i,n) for(i=0;i<n;i++)
using namespace std;

struct Room{
	int idx;
	int c;
	int p;
};
struct tab
{
	int idx;
	int cap;
};

bool cmp1(Room r1, Room r2){
	return (r1.p>r2.p);
}

bool cmp2(tab t1, tab t2){
	return (t1.cap<t2.cap);
}
int n,m,x,y;
int main(){
	cin>>n;
	Room a[n+1];

	for (int i = 0; i <n; ++i)
	{
		cin>>x>>y;
		a[i].idx=i+1;
		a[i].c=x;
		a[i].p=y;
	}
	cin>>m;
	tab b[m+5];
	for (int i = 0; i < m; ++i)
	{
		cin>>x;
		b[i].idx=i+1;
		b[i].cap=x;
		/* code */
	}

	sort(a, a+n, cmp1);

	sort(b, b+m, cmp2);

	bool avl[m+1];
	memset(avl, true, sizeof avl);

	int ans[m+1][2];
	int k=0;
	int prof=0;
	int cnt=0;
	for (int i = 0; i <n; ++i)
	{
		int req= a[i].c;
		for (int j = 0; j < m; ++j)
		{
			if(req<=b[j].cap && avl[j]){
				//cout<<req<<" "<<b[j].cap<<endl;
				//cout<<a[i].idx<<" "<<b[j].idx<<endl;
				avl[j]=false;
				ans[k][0]=a[i].idx;
				ans[k][1]=b[j].idx;


				k++;
				cnt++;
				prof +=a[i].p;

				break;
			}
			/* code */
		}
		/* code */
	}
	cout<<cnt<<" "<<prof<<endl;
	for (int i = 0; i < k; ++i)
	{
		cout<<ans[i][0]<<" "<<ans[i][1]<<endl;
	}

	return 0;

}