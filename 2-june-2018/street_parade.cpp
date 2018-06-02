#include <bits/stdc++.h>

using namespace std;

int n,curr;
int s[1000];



int main()
{
	cin>>n;
	while(n)
	{
		stack<int>s1;
		for (int i = 0; i < n; ++i)
		{
			cin>>s[i];

		}
		curr=1;
		for (int i = 0; i < n; ++i)
		{
			if(s[i]==curr)
			{
				curr++;
				continue;
			}
			else
			{
				while(!s1.empty())
				{
					if(s1.top()==curr)
					{
						curr++;
						s1.pop();
					}
					else
						break;
				}
				if(s[i]!=curr)
					s1.push(s[i]);
			}
		}
		while(!s1.empty())
				{
					if(s1.top()==curr)
					{
						curr++;
						s1.pop();
					}
					else
						break;
				}

		if(curr-1==n)
			cout<<"yes\n";
		else
			cout<<"no\n";
		cin>>n;
	}
	return 0;
}