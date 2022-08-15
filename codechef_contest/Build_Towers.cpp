#include <bits/stdc++.h>
using namespace std;
#define fastIO                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{
    fastIO;
    int t;
    cin>>t;
    while(t--)
    {
        long long int x,m,k,flag=0;
        cin>>x>>m;
        k=m;
        int p=1,count=1;
        m--;
        while(m--)
        {
            p=p*2;
            count++;
            if((p-x)>=0)
            {
                flag=1;
                break;
            } 
        }
        if(flag) cout<<k-count+1<<endl;
        else cout<<0<<endl;
    }
    return 0;
    
}





