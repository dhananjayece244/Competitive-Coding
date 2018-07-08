#include <bits/stdc++.h>
using namespace std;

string s1,s2;
int len,cnt,sum1,sum2,diff,s1_plus,s1_minus,s2_plus,s2_minus,s=0;
long long int fact(int f){
	long long int res=1;
	for (int i = 1; i <=f ; ++i)
	{
		res *=i;
	}
	return res;
}
int plus_length(string s){
	int c=0;
	for (int i = 0; i < len; ++i)
		c +=(s[i]=='+'?1:0);
	return c;
}

void solve(string s1, string s2, int idx){

	if(idx==len){
		if(plus_length(s1)==plus_length(s2))
			s++;
		return ;
	}
	if(s2[idx]=='?'){
		s2[idx]='-';
		solve(s1,s2,idx+1);

		s2[idx]='+';
		solve(s1,s2,idx+1);
	}
	else
		solve(s1,s2,idx+1);
}

int main(){
	cin>>s1;
	cin>>s2;

	len=s1.size();
	cnt=0,sum2=0,sum1=0;
	for (int i = 0; i < len; ++i)
	{
		sum1 +=(s1[i]=='+'?1:0);
		if(s2[i]=='+')
			sum2 +=1;
		else if(s2[i]=='-'){

		}
		else
			cnt++;
	}
	s1_plus=sum1;
	s1_minus=len-sum1;

	s2_plus = sum2;
	s2_minus=len-cnt-sum2;
	
	solve(s1,s2,0);

	//cout<<s<<" "<<pow(2,cnt)<<endl;
	double ans=(s*1.0)/(pow(2,cnt)*1.0);
	printf("%0.9f\n",ans);
//	cout<<(s*1.0)/(pow(2,len)*1.0)<<endl;
	return 0;


	cnt=0,sum2=0,sum1=0;
	for (int i = 0; i < len; ++i)
	{
		sum1 +=(s1[i]=='+'?1:0);
		if(s2[i]=='+')
			sum2 +=1;
		else if(s2[i]=='-'){

		}
		else
			cnt++;
	}
	s1_plus=sum1;
	s1_minus=len-sum1;

	s2_plus = sum2;
	s2_minus=len-cnt-sum2;

	if(s1_plus==s2_plus && s1_minus==s2_minus )
		cout<<1.0<<endl;
	else if(s1_plus>s2_plus+cnt || s1_minus>s2_minus+cnt){
		cout<<0.0<<endl;
	}
	else{
		diff = abs(s1_plus-s2_plus);

		double ans = (fact(cnt)/(fact(cnt-diff)*(fact(diff))))*1.0;
		double space=pow(2,cnt)*1.0;
	//	cout<<ans<<" "<<space<<endl;
		ans = ans/space;
		printf("%0.9f\n",ans);
		//cout<<ans<<endl;

	}
	return 0;
}