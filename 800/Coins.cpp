#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>

void vishu()
{
    int n, k;
    cin >> n >> k;

    if (n % k == 0 || n % 2 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        
        // if ((n - k) % 2 == 0)
        // {
        //     cout << "YES" << endl;
        // }
        // else if ((n - 2) % k == 0)
        // {
        //     cout << "YES" << endl;
        // }
        // else
        // {
        //     cout << "NO" << endl;
        // }
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        vishu();
    }
    return 0;
}