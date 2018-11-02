#include <bits/stdc++.h>
using namespace std;

int n,m;
string pat, text;
int main(){
	cin>>pat;
	cin>>text;

	n = pat.length();
	// m = text.length();
	
	// string s;
	// s += pat + "#" + text;

	int lsp[n+1]={0};

	// cout<<s<<endl;
	// return 0;
	int len=0;
	lsp[0]=0;

	for (int i = 1; i < n-1; )
	{
		if(pat[len]==pat[i]){
			len++;
			lsp[i]=len;
			i++;
		}else{
			if(len){
				len=lsp[len-1];
			}else{
				lsp[i]=0;
				i++;
			}
		}
	}
	int j = n-1;
	int ans = n;

	while(j>0){
		j = lsp[j-1];
		if(pat[j]==pat[n-1]){
			ans+=j+1;
		}
	}
	cout<<ans<<endl;

	return 0;






















	// int ans =0;

	// for (int i = 0; i < n+m+1; ++i)
	// {
	// 	// cout<<lsp[i]<<" ";
	// 	if(lsp[i]==n)
	// 	{
	// 		cout<<i-n<<endl;
	// 		ans++;
	// 	}
	// }
	// cout<<"ans "<<ans<<endl;
	return 0;
}