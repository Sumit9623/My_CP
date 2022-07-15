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
       int n,count=0;
       cin>>n;
       std::map<int,long long int> arr;
        long long int temp;
       for(int i=0;i<n;i++)
       {
           cin>>temp;
           if(temp<i+1) arr[i+1]=temp;
           else continue;
       }
       for(auto itri=arr.begin();itri!=arr.end();itri++)
       {
           for(auto itrj=arr.begin();itrj!=arr.end();itrj++)
           {
                if(itri->second<itri->first && itri->first<itrj->second && itrj->second<itrj->first)
                {
                     count++;
                }
           }
       }
        cout<<count<<endl;
    }
    return 0;
    
}