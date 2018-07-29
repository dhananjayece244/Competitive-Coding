#include <bits/stdc++.h>
using namespace std;

int main()
{
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		a1=0;
		f1=0;
		a11=a;
		b11=b;

		while(a){
			if(a&1 && !f1)
				f1=a1;
			a>>1;
			a1++;
		}
		b1=0;
		f2=0;
		while(b){
			if(b&1 && !f2)
				f2=b1;
			b>>1;
			b1++;
		}
		if(a11==b11)
			ans=0;
		else if(b==0)
			ans=-1;
		else if(a1<=b1){
			ans=b1-a1-1 + f1?f1+1:1; 
		}
		else{
			if(a1-b1<b1)
		}

	cout<<ans<<endl;
	}
}