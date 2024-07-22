#include <bits/stdc++.h>
using namespace std;
#define ll long long

void vishu()
{
    int n;
    cin >> n;

    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    int ans = INT_MIN;
    int count = 0;

    for (auto num : vec)
    {
        if (num == 0)
        {
            count++;
        }
        else
        {
            count = 0;
        }

        ans = max(count, ans);
    }

    cout << ans << endl;
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