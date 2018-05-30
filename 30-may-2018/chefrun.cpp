#include <bits/stdc++.h>
using namespace std;


double x1,x2,x3,v1,v2;
int t;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>x1>>x2>>x3>>v1>>v2;
		if(((x3-x1)/v1) < ((x2-x3)/v2))
			cout<<"Chef\n";
		else if(((x3-x1)/v1) > ((x2-x3)/v2))
			cout<<"Kefa\n";
		else 
			cout<<"Draw\n";
		
	}
	return 0;
}