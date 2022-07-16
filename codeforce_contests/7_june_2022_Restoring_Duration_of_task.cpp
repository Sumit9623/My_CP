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
        long long int n;
        cin>>n;
        long long int arra[n],arrb[n];
        for(int i=0;i<n;i++)
        {
            cin>>arra[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>arrb[i];
        }
        cout<<arrb[0]-arra[0]<<" ";
        for(int i=1;i<n;i++)
        {
            cout<<min(arrb[i]-arra[i],arrb[i]-arrb[i-1])<<" ";
        }
        cout<<endl;
       
    }
    return 0;
    
}