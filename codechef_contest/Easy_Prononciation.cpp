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
       int n,left=0,right=0,flag=0;
       cin>>n;
       string s;
       cin>>s;
       s.push_back('a');
       vector <int> arr;
       arr.push_back(0);
       for(int i=0;i<=n;i++)
       {
           if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
           {
               arr.push_back(i+1);
           }
       }
       for(int i=1;i<arr.size();i++)
       {
           if(arr[i]-arr[i-1]>4)
           {
               flag=1;
               break;
           }
       }
       if(flag) cout<<"NO"<<endl;
       else cout<<"YES"<<endl;
    }
    return 0;
    
}