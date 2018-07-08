#include<bits/stdc++.h>
using namespace std;
int a[100005];
int n,k,i,first,second;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    cin>>n>>k;
    for(i=0;i<n;i++)
        cin>>a[i];
    
    sort(a,a+n);
    
    for (int i = 1; i < n; ++i)
    {
    	while(a[i]==a[i-1])
    	{
    		count++; 
    	}
    	
    	else

    }
    first = (k-1)/n;
    second = (k-1)%n;
    
    cout<<a[first]<<" "<<a[second]<<endl;
    
    
    return 0;
}

