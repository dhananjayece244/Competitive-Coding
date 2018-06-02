#include <bits/stdc++.h>
using namespace std;

long long int k1,k,n,x,flag,temp,sum1;

unordered_map<int,pair<int,int>>m;
//long long int v[200005];

int main()
{
	cin>>k;
	flag=0;
	for (int i = 0; i < k; ++i)
	{
		cin>>n;
		sum1=0;
		std::vector<long long int> v(n+1);
		for (int j = 0; j < n; ++j)
		{
			cin>>x;

			sum1+=x;

			v[j]=x;
		//	cout<<v[j]<<" ";
		}
		for (int j = 0; j < n; ++j)
		{
			temp= sum1 - v[j];

			if(m.find(temp)==m.end()){
				m[temp]=make_pair(i+1,j+1);

			}
			else{
				auto f=m.find(temp);
				if(f->second.first!=i+1)
				{
					flag=1;
					cout<<"YES\n";
					cout<<f->second.first<<" "<<f->second.second<<endl;
					cout<<i+1<<" "<<j+1<<endl;
					return 0;
				}

			}
		}

	}
	if(!flag)
		cout<<"NO\n";

	return 0;

}
