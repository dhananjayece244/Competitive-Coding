#include <bits/stdc++.h>
using namespace std;

char s[7001];
int has[26];
int i,j,k,t,temp,flag,diff_char,count1,l,k1;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>s;

		cin>>k1;
		//scanf("%s%d",s,&k);

		l=strlen(s);

		count1=0;
		//cout<<s<<" " <<l<<endl;
		for (i = 0; i < l; ++i)
		{
			for (k = 0; k < 26; ++k)
				has[k]=0;
			for(j=i; j<l; j++)
			{
				has[s[j]-'a'] +=1;
				temp=0;
				flag=1;
				diff_char=0;
				for (k = 0; k < 26; ++k)
				  {
				  	//cout<<has[k]<<" ";
				  	if(temp && has[k])
				  	{
				  		
				  		diff_char ++;
				  		if(temp!=has[k])
				  		{
				  		//	cout<<"temp"<<temp<<"curr"<<has[k]<<endl;
				  			flag=0;
				  			break;
				  		}

				  		
				  	}
				  	else if(has[k])
				  		{
				  			temp=has[k];
				  			diff_char++;

				  		} 

				  }
				 // cout<<endl<<"diff "<<diff_char<<" k = "<<k<<" flag "<<flag<<endl;
				  if(flag && diff_char>=k1)
				  	count1 +=1; 


			}
			/* code */
		}
		cout<<count1<<endl;
    }

}