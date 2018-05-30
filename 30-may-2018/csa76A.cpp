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


int s,x,count1;

int sum_of_digit(int d)
{
	s=0;
	while(d)
	{
		s +=d%10;
		d =d/10;
	}
	return s;
}
int main()
{
	cin>>x;
	count1=1;
	while(x)
	{
		x = x- sum_of_digit(x);
		count1++;
	}

	cout<<count1<<endl;
	return 0;


}