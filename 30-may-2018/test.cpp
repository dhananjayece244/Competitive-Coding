#include <bits/stdc++.h>
using namespace std;


int main()
{
	int alphabets,sp_char,numbers,n,m,x,y,z;
	string s[51];
	cin>>n>>m;
	for (int i = 0; i < n; ++i)
		cin>>s[i];

	sp_char=100;
	numbers=100;
	alphabets=100;

	x=y=z=100;

	
	for (int i = 1; i <= m/2; ++i)
	{
		for (int j = 0; j <n ; ++j)
		{
			if(j!=y && j!=z && (s[j][i]=='#' || s[j][i]=='*' || s[j][i]=='&' || s[j][m-1-i]=='#' || s[j][m-1-i]=='*' || s[j][m-1-i]=='&'))
				{
					//sp_char= min(i,sp_char);
					if(sp_char<i)
					{
						sp_char=i;
						x=i;
					}
				}
			if(j!=x && j!= z && s[j][i]<='9' && s[j][i]>='0')
				{
					//numbers=min(i,numbers);
					if(numbers<i)
					{
						numbers=i;
						y=i;
					}
				}
			if(j!=x && j!=y && s[j][i]<='z' && s[j][i]>='a')
				{
					//alphabets=min(i,alphabets);
					if(alphabets<i)
					{
						alphabets=i;
						z=i;
					}
				}
			
		}	
	}

	for (int i = 0; i < n; ++i)
	{
		if(s[i][0]=='#' || s[i][0]=='*' || s[i][0]=='&' || s[i][0]=='#' || s[i][0]=='*' || s[i][0]=='&')
				{
					sp_char= 0;
					x=i;
				}
		if(s[i][0]<='9' && s[i][0]>='0')
			{
				numbers=0;
				y=i;
			}
		if(s[i][0]<='z' && s[i][0]>='a')
			{
				alphabets=0;
				z=i;
			}
	
	}
	
	cout<<sp_char+numbers+alphabets<<endl;
	return 0;
}