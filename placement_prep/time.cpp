#include <bits/stdc++.h>
using namespace std;

int main(){
	int t, m, h, diff, hh, mm, ss, temp, curr_time,n;
	string curr,str;

	cin>>curr;

	hh = (curr[0]-'0')*10 + curr[1]-'0';
	mm = (curr[3]-'0')*10 + curr[4]-'0';
	ss = (curr[6]-'0')*10 + curr[7]-'0';

	curr_time = hh*60*60 + mm*60 + ss;

	cin>>n;
	while(n--){
			cin>>str;
			hh = (str[0]-'0')*10 + str[1]-'0';
			mm = (str[3]-'0')*10 + str[4]-'0';
			ss = (str[6]-'0')*10 + str[7]-'0';

			temp = hh*60*60 + mm*60 + ss;

			diff = curr_time - temp ;

			if(diff/3600){
				h = diff/3600;

				if(h==1)
					cout<<"1 hour ago"<<endl;
				else
					cout<<h<<" hours ago"<<endl;

			}else if(diff/60){
				m = diff/60;

				if(m==1)
					cout<<"1 minute ago"<<endl;
				else
					cout<<h<<" minutes ago"<<endl;

			}else{
				if(diff==0)
					cout<<"Now"<<endl;
				else if(diff==1)
					cout<<"1 second ago"<<endl;
				else
					cout<<diff<<" seconds ago"<<endl;

			}
	}
	return 0;
}