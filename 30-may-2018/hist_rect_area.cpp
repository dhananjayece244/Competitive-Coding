#include <bits/stdc++.h>
using namespace std;

int n,a[10000];

int getMaxArea(){
	stack<int>s;
	int max_area=0;
	int tp;
	int area_with_top;

	int i=0;
	while(i<n)
	{
		if(s.empty() || a[s.top()]<=a[i])
			s.push(i++);
		else
		{
			tp=s.top();
			s.pop();
			area_with_top=a[tp]*(s.empty()?i:i-s.top()-1);
			cout<<area_with_top<<endl;
			if(max_area<area_with_top)
				max_area=area_with_top;
		}
	}
	cout<<endl;
	while(s.empty()==false)
	{
		tp=s.top();
		s.pop();
		area_with_top= a[tp]*(s.empty()?i:i-s.top()-1);
		
		cout<<area_with_top<<endl;
		if(max_area<area_with_top)
			max_area=area_with_top;
	}
	return max_area;

}

int main()
{
	cin>>n;
	for (int i = 0; i < n; ++i)
		cin>>a[i];
	cout<<"Maximum area ="<<getMaxArea()<<endl;

	return 0;
}