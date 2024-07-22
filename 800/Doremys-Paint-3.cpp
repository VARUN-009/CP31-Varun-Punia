#include <bits/stdc++.h>
using namespace std;
#define ll long long

void vishu()
{
    int n;
    cin >> n;

    vector<int> vec(n);
    for (int i=0; i<n; i++)
    {
        cin >> vec[i];
    }

    int total = accumulate(vec.begin(), vec.end(), 0);
    sort(vec.begin(), vec.end());
    if (total % (vec[0] + vec[1]) == 0)
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