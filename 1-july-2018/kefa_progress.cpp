#include<bits/stdc++.h>
using namespace std;

long long int n,l,l1,r1,i,cnt,ans,len,k;

string s;

int main(){
	cin>>k;
	cin>>s;
	
	len=s.size();
	for (i = 0; i < len; ++i)
	{
		if(s[i]=='1')
			break;
	}

	l=i;
	l1=0;

	if(k==0){
		ans=0;
		long long int j;
		for (i = 0; i < len; ++i){

			if(s[i]=='1'){
				j=(i-l1);
				j=(j*(j+1))/2;
				ans +=j;
				l1=i+1;
			}
		}
		j=(i-l1);
		j=(j*(j+1))/2;
		cout<<ans+j<<endl;
		return 0;
	}
	l1=i;
	
	for (; i < len; ++i)
	{
		if(s[i]=='1')
			cnt++;
		if(cnt==k)
			break;
	}

	if(s[i+1]=='0')
		i++;
	for (; i <len; ++i)
	{
		r1=0;
		while(s[i]=='0' && i<len)
		{
			r1++;
			i++;
		}
		ans =ans + (l1+1)*(r1+1);

		l=l+1;
		l1=0;
		while(s[l]=='0'){
			l++;
			l1++;
		}
	}
	cout<<ans<<endl;
	return 0;
}