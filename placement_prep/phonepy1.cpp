#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	int a[n+1];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	int i,s=a[0], f=0;
	for (i = 1; i < n; ++i)
	{
		cout<<i<<" "<<s<<" "<<s/i<<endl;
		if(s>k*i){
			f=1;
			break;

		}
		s+=a[i];
	}
	cout<<i<<" "<<s<<" "<<s/i<<endl;
	if(!f && s/i>k){
		f=1;
	}
	if(f){
		cout<<i<<endl;
	}else{
		cout<<-1<<endl;
	}
	return 0;
}