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

    if (!is_sorted(vec.begin(), vec.end()))
    {
        cout << 0 << endl;
        return;
    }
    int diff = INT_MAX;
    int mini = INT_MAX;
    for (int i = 0; i < n - 1; i++)
    {
        if((vec[i+1] - vec[i]) < diff) {
            diff = vec[i+1] - vec[i];
            mini = i;
        }

    }
    cout << ((vec[mini+1] - vec[mini]) / 2) + 1 << endl;
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