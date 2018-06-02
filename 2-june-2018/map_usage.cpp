#include <bits/stdc++.h>
using namespace std;
int main() {
	map<int,int> Map;
	srand(time(NULL));
	vector<int> v;
	for(int i = 0;i<20;i++) {
		v.push_back(rand()%15);
	}
	sort(v.begin(), v.end());
	int val;
	while(1) {
		for(int e:v) {
			cout << setw(3) <<e <<" "; 
		}
		cout << endl;
		int i = 0;
		for(int e:v) {
			cout << setw(3) <<i++ <<" "; 
		}
		cout << endl;
		cin >> val;
		int indx = upper_bound(v.begin(), v.end(),val) - v.begin();
		cout << indx << endl;
	}
} 