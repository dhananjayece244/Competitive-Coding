#include <bits/stdc++.h>
using namespace std;

int main(){

	int n, m, i, j, k, rot, p, k1,k2,r;
	vector<vector<int>> matrix(n,vector<int>(m));
	cin>>n>>m>>r;
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < m; ++j)
		{
			cin>>matrix[i][j];
		}
	}
    // n = matrix.size();
    // m = matrix[0].size();
    cout<<n<<m<<endl;
    int temp[2*n+1 + 2*m +1];
    
    for(i = 0; i<n/2 ;i++){
        k=0;
        for(j = i; j<m; j++){
            temp[k++] = matrix[i][j];
        }
        for(j = i+1; j<n; j++){
            temp[k++] = matrix[j][m-1-i];
        }
        for(j = m-1-i-1; j>=i;j--){
            temp[k++] = matrix[n-1-i][j];
        }
        for(j = n-1-i-1;j>i;j--){
            temp[k++] = matrix[j][i];
        }
        p = k*2, k1 =0, k2 =k;
        for( ;k2<p;){
            //cout<<temp[k1]<<" ";
            temp[k2++]= temp[k1++]; 
        }
        //break;
        
        rot = r%k;
        // cout<<k<<endl;
        for(p=0;p<k;p++){
            temp[p]= temp[rot+p];
            // cout<<temp[p]<<" ";
        }
        // break;
        k =0;
        for(j = i; j<m; j++){
            matrix[i][j]= temp[k++];
        }
        for(j = i+1; j<n; j++){
            matrix[j][m-1-i]= temp[k++];
        }
        for(j = m-1-i-1; j>=i;j--){
            matrix[n-1-i][j]= temp[k++];
        }
        for(j = n-1-i-1;j>i;j--){
            matrix[j][i]= temp[k++];
        }
        
    }
   cout<<n<<" "<<m<<endl;
    for(i=0; i<n;i++){
        for(j=0;j<m;j++)
            cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}