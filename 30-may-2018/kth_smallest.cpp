#include <bits/stdc++.h>
using namespace std;

multiset<int>s;
multiset<int>::iterator it;
int n,i,k,temp,t,x;
int main() {
    
	vector <int> v;
	cin>>t;
	while(t--)
	{
    	cin>>k>>n;
    	for(i=1;i<=n;i++)
        {
    	   cin>>x;
    	   if(i<=k)
    	       {
    	           s.insert(x);
    	           if(i==k)
    	            cout<<*s.begin()<<" ";
    	           else
    	            cout<<-1<<" ";
    	           
    	       }
    	   else
    	   {
    	       //s.insert(x);
    	       temp= *s.begin();
    	       it = s.begin();
    	       if(x > temp)
    	            {   
    	                //cout<<x<<" ";
    	                s.erase(it);
    	                s.insert(x);
    	                
    	            }
    	       cout<<*s.begin()<<" ";
            }
	     }
	     cout<<"\n";
	     s.clear();
	}
       
   // v.push_back()
	return 0;
}