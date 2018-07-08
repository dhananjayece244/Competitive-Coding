#include<bits/stdc++.h>
using namespace std;
multiset<int>Set;
int n,k;
int a[200009];
int main(){
	cin>>n>>k;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
		Set.insert(a[i]);
	}
	sort(a,a+n);
	for(int i = 0;i<n;i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n; ++i) {
		auto it = Set.lower_bound(a[i] - k);
		//cout << "found "<<*it<<endl;
		if(*it != a[i] ) {
			while(*it < a[i]) {
				//cout <<*it <<" deleted "<<endl;
				Set.erase(it);
				it++;
			}
		}
	}
	cout << (int)Set.size() << endl;
	return 0;
}