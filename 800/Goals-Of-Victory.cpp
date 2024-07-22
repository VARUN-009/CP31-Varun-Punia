#include <bits/stdc++.h>
using namespace std;
#define ll long long

void vishu()
{
    int teams;
    cin >> teams;

    int sum = 0;
    for (int i = 0; i < teams - 1; i++)
    {
        int digit;
        cin >> digit;

        sum += digit;
    }

    if (sum <= 0)
    {
        sum = -sum;
        cout << (sum) << endl;
    }
    else
    {
        cout << sum * -1 << endl;
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