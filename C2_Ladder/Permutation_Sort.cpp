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
       int n,flag=0;
       cin>>n;
       vector <int> arr;
       for(int i=0;i<n;i++)
       {
           int temp;
           cin>>temp;
           arr.push_back(temp);
       }
       for(int i=0;i<n-1;i++)
       {
           if(arr[i]>arr[i+1]) flag=1;
       }
       if(!flag) cout<<0<<endl;
       else if(arr.begin()== max_element(arr.begin(),arr.end()) && (--arr.end()==min_element(arr.begin(),arr.end()))) cout<<3<<endl;
       else if(arr.begin()== min_element(arr.begin(),arr.end()) || (--arr.end()==max_element(arr.begin(),arr.end())))
       {
           cout<<1<<endl;
       }
       else cout<<2<<endl;
       
    }
    return 0;
    
}