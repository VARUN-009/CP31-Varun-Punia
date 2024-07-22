#include <bits/stdc++.h>
using namespace std;
#define ll long long

void vishu()
{
    int n, k;
    cin >> n >> k;

    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    if (find(vec.begin(), vec.end(), k) != vec.end())
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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