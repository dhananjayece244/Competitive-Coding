#include <bits/stdc++.h>
using namespace std;

int x,y,z,i,j;

int main()
{
	cin>>x>>y>>z;


	if(z>y && z> x)
		cout<< z- min(x,y)<<endl;
	else if(z<x && z< y)
		cout<< max(x,y) - z <<endl;
	else{
		i = z-x;
		j = z-y ; 
		if(i<0)
			i = (-1)*i;
		if(j<0)
			j = (-1)*j;

		cout<< 2* min(i,j) + max(i,j)<<endl;
	}
	return 0;
}
