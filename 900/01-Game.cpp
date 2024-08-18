#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int> vec

// Constants
const int MOD = 1e9 + 7;

// Utils
#define len(x) int((x).size())
#define pb push_back
#define all(n) n.begin(), n.end()
#define rall(n) n.rbegin(), n.rend()

// Helper Functions
bool odd(int num) { return ((num & 1) == 1); }
bool even(int num) { return ((num & 1) == 0); }

void vishu()
{
    string str;
    cin >> str;

    int ones = 0, zeros = 0;
    for (auto ch : str)
    {
        if (ch == '0')
        {
            zeros++;
        }
        else
        {
            ones++;
        }
    }

    // 3 hi case banege ya toh 1 jyada hoge ya toh 0 jyada hoge ya toh equal hoge bss teeno hi case m odd hone chahiye kyuki start alice kar rha hai and we want ki last alice chle uske baad chlne ke liye bache hi na kuch  -- even na ho kyuki even hue toh alice ki turn m kuch bachega hi ni chlne wala 
    if (ones < zeros && ones % 2 != 0)
    {
        cout << "DA" << endl;
    }
    else if (zeros < ones && zeros % 2 != 0)
    {
        cout << "DA" << endl;
    }
    else if (ones % 2 != 0 && zeros % 2 != 0)
    {
        cout << "DA" << endl;
    }
    else
    {
        cout << "NET" << endl;
    }
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