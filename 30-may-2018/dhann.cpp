#include <bits/stdc++.h>
#include <stack>
using namespace std;

vector<int> v[100];
bool visited[100];
stack<int>Stack;


void tsort(int i)
{
	//cout<<"c\n";
	visited[i]=true;

	for(int e:v[i])
	{
		if(!visited[e])
			tsort(e);
	}
	Stack.push(i);

}
void topo_sort(int n)
{
	for (int i = 0; i < n; ++i)
	{
		//cout<<i<<endl;
		if(!visited[i])
			tsort(i);
		/* code */
	}
	//cout<<"b\n";
	while(!Stack.empty())
	{
		cout<<Stack.top()<<" ";
		Stack.pop();
	}


}
int main()
{
	   int n;
	   cin>>n;
	   int m;
	   int x,y;
	   cin>>m;
	   for(int i=0;i<m;i++)
	   {
	   	   
	   	   cin>>x>>y;

	   	   v[x].push_back(y);
	   	   //v[y].push_back(x);
	   }
	  // cout<<"a\n";
	   topo_sort(n);

	   return 0;
}