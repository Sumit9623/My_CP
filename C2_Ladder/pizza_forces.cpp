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
       vector <long long int> arr;
       long long int n,temp;
       cin>>n;
       if(n%2==1) n++;
       if(n<=6) cout<<15<<endl;
       else if(n%6==0) cout<<(n/6)*15<<endl;
       else if(n%6==2) cout<<((n/6)-1)*15+20<<endl;
       else cout<<((n/6)-1)*15+25<<endl;
       

    }
    return 0;
    
}