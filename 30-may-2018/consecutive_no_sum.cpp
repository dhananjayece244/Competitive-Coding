#include<bits/stdc++.h>
using namespace std;

long long int N,i,count1;
int main()
{
	cin>>N;
	count1=1;
	for(i=2;i<=sqrt(2*N);i++)
		if((N-i*(i-1)/2)%i==0)count1++;

	cout<<count1<<endl;
}



