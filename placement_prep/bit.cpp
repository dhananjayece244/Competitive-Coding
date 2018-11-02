#include <bits/stdc++.h>
using namespace std;

int B1[100001], B2[100001];

void UPDATE(int dp[], int i, int j, int num){
	
	for (; i <=j; i = i + (i &(-i))){
		dp[i] +=num;
	}

}

int QUERY(int dp[], int i){
	int sum=0;
	for(;i>0; i= i - (i&(-i))){
		sum+=dp[i];
	}
	return sum;
}

void Range_update(int i, int j, int num){
	update(B1, i, num);
  	update(B1, j + 1, -num) ;	
  	update(B2, i, num * (a-1));	
  	update(B2, j + 1, -num * j); 	
}

void Range_Query(int i, int j){

	return QUERY(j) - QUERY(i-1);
}




int main(){
	
	int i,j,n,q,tp,x;

	cin>>n;;
	int a[n+1];
	int dp[n+2]={0};

	for (i = 0; i < n; ++i)
	{
		cin>>a[i];
		Range_update(i,i,a[i]);
	}

	
		
		
	
	return 0;

}