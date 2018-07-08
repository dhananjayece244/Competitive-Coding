//http://codeforces.com/contest/991/problem/E

#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define mll map<ll,ll>
#define sll set<ll>
#define fo(i,n) for(i=0;i<n;i++)
using namespace std;

ll n,cnt,ans;
int dd[10],a[20];
ll f[20];
ll c[20][20];

ll fact(int i){
	ll res=1;
	for (int j = 1; j <=i; ++j)
		res *=(j*1LL);

	return res;
}

int main(){
	cin>>n;
	for (int i = 0; i < 10; ++i)
		a[i]=0;

	while(n){
		int d=n%10;
		a[d]++;
		n=n/10;
	}
	// int y=0;
	// for (int i = 0; i < 10; ++i)
	// {
	// 	if(dd[i]){
	// 		a[y]=dd[i];
	// 		y++;
	// 	}
	// }

	for (int i = 0; i <=18; ++i)
		f[i]=fact(i);
	

	for (int i = 0; i <=18; ++i)
	{
		c[i][0]=1;
		c[i][i]=1;

		for (int j = 1; j<i; ++j)
			c[i][j]=c[i-1][j-1]+c[i-1][j];
	}

	for (int i = 1;(a[0]==0 && i==1) || i <=a[0]; ++i){	
	for (int j = 1;(a[1]==0 && j==1) || j <=a[1]; ++j){
	for (int k = 1;(a[2]==0 && k==1) || k <=a[2]; ++k){
	for (int l = 1;(a[3]==0 && l==1) || l <=a[3]; ++l){
	for (int r = 1;(a[4]==0 && r==1) || r <=a[4]; ++r){
	for (int m = 1;(a[5]==0 && m==1) || m <=a[5]; ++m){
	for (int n = 1;(a[6]==0 && n==1) || n <=a[6]; ++n){
	for (int o = 1;(a[7]==0 && o==1) || o <=a[7]; ++o){
	for (int p = 1;(a[8]==0 && p==1) || p <=a[8]; ++p){
	for (int q = 1;(a[9]==0 && q==1) || q <=a[9]; ++q)
	{

		if (a[0]==0) i=0;
		if (a[1]==0) j=0;
		if (a[2]==0) k=0;
		if (a[3]==0) l=0;
		if (a[4]==0) r=0;
		if (a[5]==0) m=0;
		if (a[6]==0) n=0;
		if (a[7]==0) o=0;
		if (a[8]==0) p=0;
		if (a[9]==0) q=0;
		
		int x=(i+j+k+l+m+n+o+p+q+r);
		
		ll temp=c[x-1][i];
		ll cur =   (f[x-i]) / (f[j]*f[k]*f[l]*f[m]*f[n]*f[o]*f[p]*f[q]*f[r]) ;
		cur *=temp;
		//cout << q  << " " << x << " " << cur << endl;
		ans +=cur;
		if (a[0]==0) i=1;
		if (a[1]==0) j=1;
		if (a[2]==0) k=1;
		if (a[3]==0) l=1;
		if (a[4]==0) r=1;
		if (a[5]==0) m=1;
		if (a[6]==0) n=1;
		if (a[7]==0) o=1;
		if (a[8]==0) p=1;
		if (a[9]==0) q=1;
	}}}}}}}}}}
	cout<<ans<<endl;

	return 0;
}