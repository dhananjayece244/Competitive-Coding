#include<bits/stdc++.h>
using namespace std;
int h[256];
char s[1000000];
int main()
{
    int i,j,k,temp,max1,start;
    memset(h,0,256);

    cin>>s;
    max1=0;
    start = 0;

    for (int i = 1; i <= strlen(s); ++i)
    {
        if(h[s[i-1]])
            {
                if(start<=h[s[i-1]])
                    start=h[s[i-1]];
            }

        temp=i-start;
        //cout<<temp<<" "<<i<<" "<<" " << s[i-1]<<endl;
        if(max1<temp)
            max1=temp; 

        h[s[i-1]]=i;
    }
    cout<<max1<<endl;
  
    return 0;
}