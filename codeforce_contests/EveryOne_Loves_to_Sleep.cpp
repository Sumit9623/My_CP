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
        int n,H,M,h,m,ans1=INT_MAX,ans2=INT_MAX;
        cin>>n>>H>>M;
        while(n--)
        {
            cin>>h>>m;  
            int temp1,temp2;
            if(m>=M) temp2=(m-M);
            else
            {
                temp2=(m+60-M);
                h--;    
            }
            if(h>=H) temp1=h-H;
            else temp1=(h+24-H);
            if(temp1<ans1) 
            {
                ans1=temp1;
                ans2=temp2;
            }
            else if(temp1==ans1 && temp2<ans2)
            {
                ans2=temp2;
            }
            else continue;
        }
        cout<<ans1<<" "<<ans2<<endl;

    }
    return 0;
    
}