#include<bits/stdc++.h>
using namespace std;

int x_cod[4];
int y_cod[4];
int x_codd[4];
int y_codd[4];

int min_x=1000,  max_x=-1000,min_y=1000,max_y=-1000;
int min_xx=1000, min_yy=1000,max_xx=-1000,max_yy=-1000;

int main()
{
	for (int i = 0; i < 4; ++i)
	{
		cin>>x_cod[i];
		cin>>y_cod[i];
		min_x = min(min_x, x_cod[i]);
		min_y = min(min_y, y_cod[i]);

		max_x = max(max_x, x_cod[i]);
		max_y = max(max_y, y_cod[i]);
	}
	for (int i = 0; i < 4; ++i)
	{
		cin>>x_codd[i];
		cin>>y_codd[i];

		min_xx = min(min_xx, x_codd[i]);
		min_yy = min(min_yy, y_codd[i]);

		max_xx = max(max_xx, x_codd[i]);
		max_yy = max(max_yy, y_codd[i]);


	}

	if(min_xx > max_x || min_yy > max_y || max_xx < min_x || max_yy < min_yy)
		cout<<"NO\n";
	else
		cout<<"YES\n";
	// cin>>x[0]>>y[0]>>x[1]>>y[1]>>x[2]>>y[2]>>x[3]>>y[3];
	// cin>>x1[0]>>y1[0]>>x1[1]>>y1[1]>>x1[2]>>y1[2]>>x1[3]>>y1[3];

	// if((x_codd[0] > x_cod[1]) || (y_codd[1] > y_cod[2]) || (x_codd[2] < x_cod[0]) || (y_codd[3] < y_cod[0]))
	// 	cout<<"NO\n";
 //    else if(x_codd[0]>x_cod[2] || y_codd[3]>y_cod[2] || x_codd[2]<x_cod[0] || y_codd[1]<y_cod[0])
	//  	cout<<"NO\n";
	// else
	// 	cout<<"YES\n";

	return 0;
}
