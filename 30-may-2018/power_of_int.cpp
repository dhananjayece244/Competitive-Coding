#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,i,flag=0,A;
    cin>>A;
    for(i=2;i<=32;i++)
    {
        k=ceil(pow(A*1.0,1.0/(i*1.0)));
        cout<<k<<" "<<pow(k,i)<<" "<<A<<endl;
        if(pow(k,i)==A)
            {
                flag=1;
                break;
            }
    }
    cout<<flag<<endl;
   // return flag;
}
//  int a[1000000],b[100000];
//     memset(a,1, A*4);
//     for(i=2;<A;i++)
//     {
//         for(j=i*2,k=2;j<A;)
//         {
//             a[j]=0;
//              k++;
//              j=i*k;
//         }
//     }