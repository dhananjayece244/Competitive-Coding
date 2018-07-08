#include<bits/stdc++.h>
using namespace std;
string s[300005];

map<string,int>Map;

string check(string s) {
	//string res = "";

	int n = s.length();
	char res[n+1];
	if(n == 1) return s;
	res[0] = s[0];
	
	//cout <<"here "<<res << endl;
	int top = 1;
	for(int i = 1;i<n;i++) {
		if(res[top - 1] == '(' && s[i] == ')') {
			top--;
			//cout <<"hi"<<endl;
		}else {
			res[top] = s[i];
			top++;
			//cout << res << endl;
			//cout <<"hiiii"<<endl;
		}
	}
	string ans = "";
	if(top == 0) return ans;
	if(res[0] != res[top - 1]) {
		return "-";
	}
	//cout << res << endl;
	res[top]='\0';
	return res;
}

int cor,n,ans_1,ans_2;
int main(){
	cin>>n;
	for (int i = 0; i < n; ++i) {
		cin>>s[i];
		string x = check(s[i]);
		
		//cout <<s[i] << " returns " <<x<<endl;

		if(x == "") {
			
			cor++;
		
		}else if(x != "-") {
			Map[x]++;
		}
	}
	ans_1 += ( cor * (cor - 1 ) ) + cor;
	//cout <<"ans for correct ones = "<<ans_1<<endl;
	for(auto e:Map) {
		string str = e.first;
		int temp=e.second;

		if(str[0]=='(') {
			for (int i = 0; i < str.length(); ++i){
				if(str[i]=='(')
					str[i]=')';
				else
					str[i]='(';
			}
			//reverse(str.begin(),str.end());
			//cout << temp <<" "<<Map[str]<< endl;

			ans_2 += temp*Map[str];
		}
		
	}
	cout << ans_1 + ans_2 << endl;
	return 0;
}

