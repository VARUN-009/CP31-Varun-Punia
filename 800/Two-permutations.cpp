#include <bits/stdc++.h>
using namespace std;
#define ll long long

void vishu()
{
    int n, a, b;
    cin >> n >> a >> b;

    if (n == a && a == b)
    {
        cout << "Yes" << endl;
        return;
    }

    if (n - (a + b) >= 2)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
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