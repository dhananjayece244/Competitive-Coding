#include <bits/stdc++.h>
using namespace std;

int lps[1000];
char pattern[1000];
char str[1000];
int pat_len,str_len;


void preprocess(){
	int idx =0;
	
	for (int i = 1; i < pat_len;)
	{
		if(pattern[i]==pattern[idx]){
			lps[i]=idx+1;
			i++;
			idx++;
		}
		else{
			if(idx!=0){
				idx=lps[idx-1];
			}
			else{
				lps[i]=0;
				i++;
			}
		}
	}
	// for (int i = 0; i < pat_len; ++i)
	// 	cout<<lps[i]<<" ";
	// cout<<endl;
}

int kmp(){
	preprocess();
	int	i=0;
	int j=0;
	while(i<str_len && j<pat_len){
		if(str[i]==pattern[j]){
			i++;
			j++;
		}
		else{
			if(j!=0)
				j=lps[j-1];
			else
				i++;
		}
	}
	if(j==pat_len)
		return (i-pat_len);
	else
		return -1;


}

int main()
{
	cin>>str;
	cin>>pattern;
	str_len=strlen(str);
	pat_len=strlen(pattern);

	// cout<<str<<endl;
	// cout<<pattern<<endl;
	// cout<<str_len<<endl;
	// cout<<pat_len<<endl;


	cout<<kmp()<<endl;
	return 0;
}