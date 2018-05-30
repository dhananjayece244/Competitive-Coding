#include<bits/stdc++.h>
using namespace std;

long long int x,y;
int main()
{
	cin>>x>>y;
	double l,r;

	if(x==1 && y>1)
		cout<<"<"<<endl;
	else if(x>1 && y==1)
		cout<<">"<<endl;
	else if(x==1 && y==1)
		cout<<"="<<endl;
	else
	{
		l=((y*1.0)/(x*1.0));
		r=(log(y*1.0)/log(x*1.0));

		if(l<r)
			cout<<"<"<<endl;
		else if(l>r)
			cout<<">"<<endl;
		else
			cout<<"="<<endl;
	}

	return 0;

}
