#include <bits/stdc++.h>

using namespace std;

int a[1000],block[10];
int n,block_size,blk_idx;

void update(int idx, int val)
{
	int block_number = idx/block_size;
	block[block_number] +=val-a[idx];
	a[idx] = val;
}


int query(int l, int r)
{
	int sum=0;

	while(l<r and l%block_size!=0 and l!=0)
	{
		sum +=arr[l];
		l++
	}
	while(l+block_size<=r)
	{
		sum +=block[l/block_size];
		l +=block_size;
	}
	while(l<=r)
	{
		sum +=a[i];
		l++;
	}
	return sum;
}

void preprocess()
{
	blk_idx=-1;
	block_size = sqrt(n);

	for (int i = 0; i < n; ++i)
	{
		if(i%block_size==0)
			blk_idx++;
		block[blk_idx] +=a[i];
	}
}
int main()
{
	cin>>n;
	for (int i = 0; i < n; ++i)
		cin>>a[i];

	preprocess();
	for (int i = 0; i < sqrt(n); ++i)
		cout<<block[i]<<" ";
	update(6,10);
	cout<<endl;

	//preprocess();
	for (int i = 0; i < sqrt(n); ++i)
		cout<<block[i]<<" ";
	cout<<endl;


	return 0;
}