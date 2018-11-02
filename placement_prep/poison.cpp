#include <bits/stdc++.h>
using namespace std;

vector<int>p[11];
int main(){

	for (int i = 1; i < 1001; ++i)
	{
		int temp =i;
		for (int j = 0; j < 10; ++j)
		{
			if((temp>>j)&1)
				p[j+1].push_back(i);			
		}
	}

	for (int i = 1; i < 11; ++i)
	{
		cout<<"Person "<<i<<" drinks total "<<p[i].size()<<" bottols"<<endl;
		// for(auto e:p[i])
		// 	cout<<e<<" ";
		cout<<endl;
	}
	return 0;

}