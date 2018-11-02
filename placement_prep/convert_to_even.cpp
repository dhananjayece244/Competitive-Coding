#include <bits/stdc++.h>
using namespace std;

int main(){
	long n;
	cin>>n;

	string s = to_string(n);

	int len = s.length();

	int f=0, i, j;
	
	for (i = 0; i < len; ++i)
	{
		if((s[i]-'0')%2){
			f = i;
			break;
		}
	}
	if(i==len){
		cout<<0<<endl;
		return 0;
	}

	string s1,s2;

	for (j = 0; j < f; ++j)
	{
		s1 +=s[j];
		s2 +=s[j];
	}
	// cout<<s1<<" "<<s2<<endl;
	if(s[f]=='9'){
		for (j = f; j < len; ++j)
		{
			s2 +='8';
		}
		long l = stol(s2);
		cout<<n-l<<endl;
		return 0;
	}
		
	s1 +=(s[f]+1);
	
	s2 +=(s[f]-1);

	// cout<<s1<<" "<<s2<<endl;

	for (f++; f < len; ++f)
	{
		s1 +='0';
		s2 +='8';
	}
	// cout<<s1<<" "<<s2<<endl;
	long u = stol(s1);
	long l = stol(s2);
	cout<<u<<" "<<l<<endl;
	cout<<min((u-n), (n-l))<<endl;

	return 0;
}