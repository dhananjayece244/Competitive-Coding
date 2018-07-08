#include <bits/stdc++.h>
using namespace std;
string ans_max = "-1",ans_min= "-1"; 
int flag=0;
void solve_max(int m, int s,string _ans) {
	//cout << _ans << endl;
	if( m == 0 && s == 0 ) {
		ans_max = _ans;
		flag=1;
		return;
	}
	if(m > 0 && s >= 0) {
		for (int i = 9; i >=0; --i) {
			if(!flag)
				solve_max(m - 1,s - i, _ans + to_string(i));  
		}
	}
}

void solve_min(int m, int s,string _ans) {
	//cout << _ans << endl;
	if( m == 0 && s == 0 ) {
		ans_min = _ans;
		flag=1;
		return;
	}
	if(m > 0 && s > 0) {
		for (int i = 0; i <=9; ++i) {
			if(!flag)
				solve_min(m - 1,s - i, _ans + to_string(i));  
		}
	}
}
int main() {
	int m,s;
	cin >> m >> s;
	if(m==1 && s==0){
		cout<<0<< " "<<0<<endl;
		return 0;
	}
	
	if(s<1 ||(m*9<s)){
		cout<<-1<< " "<<-1<<endl;
		return 0;
	}
	


	//----------min---------
	int i;
	for (i = 1; i <= 9; ++i)
	{
		ans_max="-1";
		solve_max(m-1,s-i,"");
		if(ans_max!="-1")
			break;
	}
	cout<<char('0'+i);
	int l=ans_max.size();
	for (int i = 0; i < l; ++i)
		cout<<ans_max[l-1-i];

	//----------max-------
	flag=0;
	cout<<" ";
	solve_max(m,s,"");

	cout << ans_max <<" ";
	cout<<endl;

	return 0;

}