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
        long long int n,ans;
        cin>>n;
        long long int arr[12];
        for(int i=0;i<12;i++)
        {
            arr[i]=LONG_LONG_MAX;
        }
        if(n%6==0) arr[0]=(n/6)*15;
        else if(n%6>0 && n%6<=2) arr[1]=(n/6)*15+5;
        else if(n%6>2 && n%6<=4) arr[2]=(n/6)*15+10;
        else arr[3]=(n/6)*15+15;
        if(n%8==0) arr[4]=(n/8)*20;
        else if(n%8>0 && n%8<=2)arr[5]=(n/8)*20+5;
        else if(n%8>2 && n%8<=6)arr[6]=(n/8)*20+15;
        else arr[7]=(n/8)*20+20;
        if(n%10==0) arr[8]=(n/10)*25;
        else if(n%10>0 && n%10<=6) arr[9]=(n/10)*25+15;
        else if(n%10<=8) arr[10]=(n/10)*25+20;
        else arr[11]=(n/10)*25+25;
        ans=*min_element(arr,arr+7);
        cout<<fixed<<ans<<endl;
    }
    return 0;
    
}