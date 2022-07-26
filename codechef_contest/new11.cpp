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
        int i,n,flag=0;
        cin>>n;
        string s,s1,s2;
        cin>>s;
        for( i=0;i<n;i++)
        {
            if(i%2==0) s1.push_back(s[i]);
            else s2.push_back(s[i]);
        }
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        if(!s1.compare(s2)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
    
}