#include<bits/stdc++.h>
using namespace std;

int a[105],b[105];
int n,m,j,res;

int main(){
	cin>>n;
	for (int i = 0; i < n; ++i)
		cin>>a[i];
	sort(a,a+n);
	cin>>m;
	for (int i = 0; i < m; ++i)
		cin>>b[i];
	sort(b,b+m);
	j=0;
	res=0;
	for (int i = 0; i < n && j<m; ++i){

		if(abs(a[i]-b[j])<2){
			res++;
			j++;
		}
		else if(a[i]>b[j]){
			while(j<m){
				if(abs(a[i]-b[j])<2){
				res++;
				j++;
				break;
				}
				else if(a[i]<b[j])
					break;
				else
					j++;
				//cout<<i<<" "<<j<<endl;
			}
		}

	}
	cout<<res<<endl;
	return 0;
}