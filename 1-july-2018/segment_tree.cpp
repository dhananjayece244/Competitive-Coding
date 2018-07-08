#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define mll map<ll,ll>
#define sll set<ll>
#define fo(i,n) for(i=0;i<n;i++)
using namespace std;


void recalculate(int node){
	segm_tree[node]=max(segm_tree[2*node+1],segm_tree[2*node+2]);

}

void build(int node, int left, int right){

	if(left==right){
		segm_tree[node]=a[left];
	}
	else{
		int middle=(left+right)/2;
		build(2*node+1,left,middle);
		build(2*node+2,middle+1,right);
		recalculate(node);
	}
}

void update(int node, int left, int right, int x, int y){

	if(left==right){
		segm_tree[node]=y;
	}
	else{
		int middle=(left+right)/2;
		if(x<=middle){
			update(2*node+1,left,middle,x,y);
		}
		else{
			update(2*node+2,middle+1,right,x,y);
		}
		recalculate(node);
	}
}

int query(int node, int left, int right, int x, int y){

	if(x<=left && right<=y){
		return segm_tree[node];
	}
	else{
		int ans=INT_MIN;
		int middle=(left+right)/2;
		if(x<=middle){
			ans=max(ans, query(2*node+1,left,middle,x,y));
		}
		if(y>=middle+1){
			ans = max(ans, query(2*node+2,middle+1,right,x,y));
		}

		return ans;

	}
}

int main(){


}