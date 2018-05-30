#include <bits/stdc++.h>

int la,lb,i,j,k;
char A[2505],B[2505];

using namespace std;
int main()
{
	cin>>A;
	cin>>B;
	la= strlen(A);
	lb= strlen(B);
	int flag=1;
	if(la%lb)
		cout<<-1<<endl;
	else
	{
		k=la/lb;
		for (i = 0; i < k; i++)
		{
			for (j = 0; j < lb; j++)
			{
				//cout<<A[i*lb+j]<<" "<<B[j]<<endl;
				if(A[i*lb+j]!=B[j])
					{
						flag=0;
						break;
					}
				/* code */
			}
			
			/* code */
		}
		if(flag)
			cout<<1<<endl;
		else
			cout<<-1<<endl;


		//cout<<1<<i<<endl;

	}

	return 0;
}