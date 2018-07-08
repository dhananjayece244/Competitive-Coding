#include<bits/stdc++.h>
using namespace std;

int v,idx,min1,max_size;
int d[10];
int main(){

	cin>>v;
	min1=1000007;
	for (int i = 1; i < 10; ++i)
	{
		cin>>d[i];
		if(min1 >= d[i]){
			min1= d[i];
			idx = i;
		}
	}
	if(v<min1)
	{
		cout<<-1<<endl;
		return 0;
	}
	max_size= v/min1;
	char ans[max_size+1];
	memset(ans, char('0'+idx),sizeof ans);

	v -= max_size*min1;

	int j=0;
	for (int i = 9; i >0; --i)
	{
		if(d[i]<=v+d[idx] && i>idx){
			ans[j]=char('0'+i);
			j++;
			v -=(d[i]-d[idx]);
			i++;
			
		}
	}


	ans[max_size]='\0';
	cout<<ans<<endl;

	return 0;


}