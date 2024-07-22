#include <bits/stdc++.h>
using namespace std;
#define ll long long

// The main trick is that you only have to check 2s as 1s will not contribute to answer so if at any point you get an index in which no. of 2 on both sides are same then that is the index.
void vishu()
{
    int n;
    cin >> n;

    vector<int> vec(n);
    int two = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
        if (vec[i] == 2)
        {
            two++;
        }
    }

    // case when every number is 1 so total product = 1 and first index will be our answer
    if (two == 0)
    {
        cout << 1 << endl;
        return;
    }

    // if you have odd number of 2s, then you can't find the answer as you cannot make the two sides equal.
    if (two % 2 != 0)
    {
        cout << -1 << endl;
        return;
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (vec[i] == 2)
        {
            count++;
        }
        if (count != 0 && count == two / 2)
        {
            cout << i + 1 << endl;
            return;
        }
    }

    cout << -1 << endl;
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