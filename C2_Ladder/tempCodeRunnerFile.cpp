#include <bits/stdc++.h>
using namespace std;
#define fastIO                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
long long int factorial(int n) {
      if(n == 0)
      return 1;
    long long int factorial = 1;
    for (int i = 2; i <= n; i++)
        factorial = factorial * i;
    return factorial;
}
 
long long int nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}
int main()
{
    fastIO;
    int t;
    cin>>t;
    while(t--)
    {
        long long int ans=0;
        int n,zc=0,oc=0;
        cin>>n;
        int temp=0;
        while(n--)
        {
            cin>>temp;
            if(temp==0) zc++;
            if(temp==1) oc++;
        }
        for(int i=0;i<zc;i++)
        {
            ans=ans+nCr(zc,i);
        }
        cout<<fixed<<ans*oc<<endl;
    }
    return 0;
    
}