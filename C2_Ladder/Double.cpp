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
        int n,flag;
        std::map <string,int> str;
        vector<string> arr;
        string s,ans,s1,s2;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>s;
            str[s]=i;
            arr.push_back(s);
        }
        for(int i=0;i<n;i++)
        {
            flag=0;
            int l=arr[i].size();
            for(int j=1;j<l;j++)
            {
                s1=arr[i].substr(0,j);
                s2=arr[i].substr(j,l-j);
                if(str.count(s1)==1 && str.count(s2)==1)
                {
                    flag=1;  
                } 
            }
            if(flag) ans+='1';
            else ans+='0';
        }
        cout<<ans<<endl;
       
    }
    return 0;
    
}