#include<bits/stdc++.h>
using namespace std;

map<string,string>mp = { {"red", "Reality"}, {"purple","Power"},{"green","Time"},{"blue","Space"},{"orange","Soul"} ,{"yellow","Mind"}};
string s[6];
string s1[6];
string s3[6]={"red","purple","green","blue","orange","yellow"};
int n,k,flag;
int main()
{
	cin>>n;
	for (int i = 0; i < n; ++i)
		cin>>s[i];
	k=0;
	for (int i = 0; i < 6; ++i)
	{
		flag=0;
		for (int j = 0; j < n; ++j)
		{
			if(s3[i]==s[j])
				flag=1;
		}
		if(!flag)
		{	
			s1[k]=s3[i];
			k++;
		}
	}
	cout<<k<<endl;
	for (int i = 0; i < k; ++i)
		cout<<mp[s1[i]]<<endl;
	return 0;

}
