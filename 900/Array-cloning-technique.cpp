#include <bits/stdc++.h>
using namespace std;

// Constants
const int MOD = 1e9 + 7;

// Utils
#define int long long
#define vi vector<int> vec
#define len(x) (x).size()
#define pb push_back
#define all(n) n.begin(), n.end()
#define rall(n) n.rbegin(), n.rend()
#define stoi stoll

// Control Flow
#define loop(i, a, b) for (int i = a; i < (b); i++)
#define rloop(i, a, b) for (int i = (b) - 1; i >= a; i--)
#define trav(a, x) for (auto &a : x)

// Helper Functions
bool odd(int num) { return ((num & 1) == 1); }
bool even(int num) { return ((num & 1) == 0); }

void vishu()
{
    int n;
    cin >> n;

    vi(n);
    loop(i, 0, n)
    {
        cin >> vec[i];
    }

    // TC of unordered map in worst case is O(n) whereas worst case TC of ordered map is O(logn). At first, I have taken an unordered map and was getting TLE in test case 13 then after thinking for 30 mins straight, I saw the editorial and ordered map was used there so after taking an ordered map, AC :) 0 logic was same 

    // if you have 2 same elements at the start, after copying you will have 4 then 8 then 16 and so on... just keep decreasing the left and also count the operations too.
    map<int, int> mp;
    int start = INT_MIN;
    trav(ele, vec)
    {
        mp[ele]++;
        start = max(start, mp[ele]);
    }

    if (mp.size() == 1)
    {
        cout << 0 << endl;
        return;
    }
    int operations = 0;
    int left = n - start;
    while (1)
    {
        if (start - left >= 0)
        {
            operations += left;
            break;
        }
        else
        {
            operations += start + 1;
            left -= start;
            start *= 2;
        }
    }
    
    cout << operations + 1 << endl;
}

int32_t main()
{
    int t;
    cin >> t;

    while (t--)
    {
        vishu();
    }
    return 0;
}