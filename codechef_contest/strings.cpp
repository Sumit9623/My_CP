#include <bits/stdc++.h>
using namespace std;
#define fastIO                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
void swap(char &a, char &b)
{
    char temp = a;
    a = b;
    b = temp;
}
int main()
{
    int t;
    fastIO;
    cin >> t;
    while (t--)
    {
        int n;
        int notpali = 0, flag = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n / 2; i++)
        {
            if (s[i] == s[n - i - 1])
                continue;
            else
            {
                notpali = 1;
                break;
            }
        }
        if (!notpali)
            cout << "YES" << endl;
        else
        {
            for (int i = 0; i < n / 2 - 1; i++)
            {
                if (s[i] == s[n - i - 1])
                {
                    continue;
                    // cout << "i am in if" << endl;
                }
                else if (s[i] == s[n - i - 3])
                {
                    swap(s[n - i - 1], s[n - i - 3]);
                    // cout << "I am in 1st else if" << endl;
                }
                else if (s[n - i - 1] == s[i + 2])
                {
                    swap(s[i], s[i + 2]);
                    // cout << "I am in 2nd else if" << endl;
                }
                else
                {
                    // cout << "I am in else " << endl;
                    flag = 1;
                    break;
                }
            }
            cout << s << endl;
            for (int i = 0; i < n / 2; i++)
            {
                if (s[i] == s[n - i - 1])
                    continue;
                else
                {
                    flag = 1;
                    break;
                }
            }
            if (flag)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }
    return 0;
}