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
        long long int n,m,count=0,left,right,ans=0;
        cin>>n>>m;
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1') count++;
        }
        if(count==0)
        {
            cout<<fixed<<m*n<<endl;
        }
        else
        {
            if(m%2==1)
            {
                left=0,right=count;
                for(int i=0;i<n;i++)
                {
                    if(s[i]=='1')
                    {
                        left++;
                        right--;
                    }
                    if(left==right) ans++;
                }
            }
            else 
            {
                left=0;
                right=2*count;
                s.append(s);
                for(int i=0;i<2*n;i++)
                {
                    if(s[i]=='1')
                    {
                        left++;
                        right--;
                    }
                    if(left==right) ans++;
                }

            }
            cout<<ans<<endl;
        }
    }
    return 0;
    
}