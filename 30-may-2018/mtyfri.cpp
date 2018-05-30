#include <bits/stdc++.h>
using namespace std;

template<typename T>
void LOG(T const& t) {
	std::cout << t;
}
template<typename First, typename ... Rest> 
void LOG(First const& first, Rest const& ... rest) {
	std::cout << first<<" "; LOG(rest ...);
}


multiset<int>s1;
multiset<int, greater<int>>s2;


long long int x,n,k,t,monu1,monu,tonu,tonu1,diff,i;


int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cin>>t;
	while(t--)
	{
		monu=0;
		monu1=0;
		tonu1=0;
		tonu=0;
		diff=0;
		cin>>n>>k;
		for (i = 1; i <=n; ++i)
		{
			cin>>x;
			if(i%2)
			{
				monu +=x;
				monu1 +=x;
				s1.insert(x);
				if(s1.size()>k)
				{
					monu1 -=*s1.begin();
					s1.erase(*s1.begin());
				} 
			}
			else
			{
				tonu +=x;
				tonu1 +=x;
				s2.insert(x);
				if(s2.size()>k)
				{
					tonu1 -=*s2.begin();
					s2.erase(*s2.begin());
				} 
			}
		}
		cout<<monu<<" "<<tonu<<endl;
		cout<<monu1<<" "<<tonu1<<endl;
	//	LOG(monu1,monu,"\n");
		diff = monu-tonu;

		if(diff<0)
			cout<<"YES\n";
		else
		{
			diff = diff - 2*(monu1-tonu1);
			if(diff<0)
				cout<<"YES\n";
			else
				cout<<"NO\n";
		}
		
	}

	return 0;
}