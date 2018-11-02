#include <bits/stdc++.h>
using namespace std;

void UPDATE(int dp[], int i, int j, int num){
	
	for (; i <=j; i = i + (i &(-i)))
	{
		dp[i] +=num;
	}

}

int SUM_QUERY(int dp[], int i){
	int sum=0;
	for(;i>0; i= i - (i&(-i))){
		sum+=dp[i];
	}
	return sum;
}




int main(){
	
	int i,j,n,q,tp,x;

	cin>>n;;
	int a[n+1];
	int dp[n+2]={0};

	for (i = 0; i < n; ++i)
	{
		cin>>a[i];
		// UPDATE(dp,i+1,n,a[i]);
		// UPDATE(dp,i+2,n,-a[i]);
		// dp[i+1] = a[i];

	}
	
		
		cin>>q;
		while(q--){
			cin>>i>>j>>x;
			// UPDATE(dp,i,n,x);
			// UPDATE(dp,j+1,n,-x);
			dp[i] = dp[i] + x;
			if(j+1<=n)
				dp[j+1] = dp[j+1] - x;
		}
		for (int i = 1; i <=n; ++i)
		{
			// dp[i] = dp[i] + dp[i-1];
			cout<<dp[i]<<" ";
		}
		cout<<endl;
		for (int i = 1; i <=n; ++i)
		{
			dp[i] = dp[i] + dp[i-1];
			cout<<dp[i]<<" ";
		}
		cout<<endl;
		cin>>q;
		while(q--){
			cin>>i;
			// UPDATE(dp,i,n,x);
			// UPDATE(dp,j+1,n,-x);
			cout<<a[i-1]+dp[i]<<endl;
		}
		
	
	return 0;

}