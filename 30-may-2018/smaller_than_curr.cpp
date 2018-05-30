#include <bits/stdc++.h>
using namespace std;

multiset<int>s;
multiset<int>::iterator it;
int n, a[10000];
int main()
{
	cin>>n;
	for (int i = 0; i < n; ++i)
		cin>>a[i];
	// cout<<-1<<endl;
	// s.insert(a[0]);
	for (int i = 0; i < n; ++i)
	{
		 it = s.upper_bound(a[i]);
		 if(it==s.begin())
		 	cout<<-1<<" ";
		 else{
		 	it--;
		 	cout<<*it<<" ";
		 }
		s.insert(a[i]);
	//  
     
 //    for (it = s.begin(); it != s.end(); it++)
 //    {
 //        // print in ascending order as required.
 //        cout << (*it) << " " ; 
 //      }
    //  cout<<endl;
	}
	return 0;
}