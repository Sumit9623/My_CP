
// 12 July 2022   codeforces round 806 (div 4)
// Problem D : YES or YES
// link : https://codeforces.com/contest/1703/problem/A

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
       string s ;
       cin>>s;
       if((s[0]=='Y' || s[0]=='y') && (s[1]=='E' || s[1]=='e') && (s[2]=='S' || s[2]=='s'))
       {
           cout<<"YES"<<endl;
       }
       else cout<<"NO"<<endl;
    }
    return 0; 
    
}