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

    map<int, int> mp;
    for (auto ele : vec)
    {
        mp[ele]++;
    }

    if (mp.size() >= 3)
    {
        cout << "No" << endl;
        return;
    }

    // even case when the number of elements in the array are even - mp.begin()->second && mp.begin()->first && mp.rbegin()->first && mp.rbegin()->second
    // in even, 2 elements will be there and both will have the same count so difference should be 0.
    if (n % 2 == 0)
    {
        if (abs(mp.begin()->second - mp.rbegin()->second) == 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    // n is odd -- in odd 2 elements will be there but one will have a extra count so that's why abs and in map, it gives ordered result stores in ordered way on the basis of key.
    // to access - first element you may also use -- *(mp.begin()) - it will give two things first and second.  -- aisa bhi ho sakta hai ki bss 1 hi odd element ho n times to <= 1
    else
    {
        if (abs(mp.begin()->second - mp.rbegin()->second) <= 1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
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