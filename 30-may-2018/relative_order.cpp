#include <bits/stdc++.h>
using namespace std;

template<typename T>
void LOG(T const& t) {
    std::cout << t;
}
template<typename First, typename ... Rest> 
void LOG(First const& first, Rest const& ... rest) {
    std::cout << first<<" "; LOG(rest ...);
}


multiset<int>s1;
multiset<int, greater<int>>s2;


long long int t,n,m,index1, currt, temp[1000],a[1000],b[1000],visited[1000];


int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);

    cin>>t;
    while(t--)
    {
        memset(temp,0,sizeof temp);
        memset(visited,0,sizeof temp);
        currt=0;
        cin>>n>>m;
        for (int i = 0; i < n; ++i)
        {
            cin>>a[i];
            temp[i]=a[i];
            /* code */
        }
        for (int i = 0; i < m; ++i)
        {
            cin>>b[i];
            /* code */
        }
        sort(temp, temp+n);
        for (int i = 0; i < m; ++i)
        {
            index1=lower_bound(temp,temp+n,b[i])-temp;
            while(temp[index1]==b[i])
            {
                a[currt]=temp[index1];
                visited[index1]+=1;
                index1++;
                currt++;
                
            }
            /* code */
        }
        for (int i = 0; i < n; ++i)
        {
           
            if(!visited[i])
                {

                    a[currt]=temp[i];
                    currt++;
                }
                // cout<<visited[i]<<" ";
        }
     //   cout<<endl;

        for (int i = 0; i < n; ++i)
        {
            cout<<a[i]<<" ";
            /* code */
        }
        cout<<endl;
     
        
    }

    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;
vector<int> A1,A2,A3,A4;
map<int,int> positions;
map<int, int> has;
bool compare(int a,int b) {
    return (positions[a] < positions[b]);
}
int main() {
    int T,N,M;
    cin >> T;
    for(int q = 1;q<=T;q++) {
        cin >> M >> N;
        for(int i = 0,x;i<M;i++) {
            cin >> x;
            A1.push_back(x);
        }
        for(int i = 0,x;i<N;i++) {
            cin >> x;
            positions[x] = i;
            has[x] = 1;
            A2.push_back(x);
        }
        for(int i = 0;i<M;i++) 
            (has[A1[i]]) ? A3.push_back(A1[i]):A4.push_back(A1[i]);
        
        sort(A3.begin(), A3.end(),compare);
        sort(A4.begin(), A4.end());
        for(int e:A3) cout << e <<" ";
        for(int e:A4) cout << e <<" ";
        cout << endl;
        A1.clear();A2.clear();A3.clear();A4.clear();
    }
    return 0;
}