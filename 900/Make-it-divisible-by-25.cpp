#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int> vec

// Constants
const int MOD = 1e9 + 7;

// Utils
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
    int num;
    cin >> num;

    string str = to_string(num);

    // to make it divisible by 25, it should have [25, 50, 75, 00] at the end so what we can do is that agr [25, 50, 75, 00] m inme kisi ka last character mil gya like 0 5 toh I will search for their 0th character mil gya acha nhi toh agr sirf 0 hi mila toh size-1 else size.
    // and agr mil gya 0th character toh n-2-i as n length ki hai toh 2 character toh m dekh hi rha hu unko htao and then i ke left side m jo bache hai unko bhi htao which will give me left characters.

    bool zero_found = false;
    bool five_found = false;

    rloop(i, 0, len(str))
    {
        // case for 25
        if (five_found && str[i] == '2')
        {
            cout << len(str) - 2 - i << endl;
            return;
        }

        // case for 75
        if (five_found && str[i] == '7')
        {
            cout << len(str) - 2 - i << endl;
            return;
        }

        // case for 00
        if (zero_found && str[i] == '0')
        {
            cout << len(str) - 2 - i << endl;
            return;
        }

        // case for 50
        if (zero_found && str[i] == '5')
        {
            cout << len(str) - 2 - i << endl;
            return;
        }

        if (str[i] == '5')
        {
            five_found = true;
        }

        if (str[i] == '0')
        {
            zero_found = true;
        }
    }

    // now if we only got 0 then return size-1
    if (zero_found)
    {
        cout << len(str) - 1 << endl;
        return;
    }

    // incase we got nothing like the number is 1473
    cout << len(str) << endl;
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

/*
Another solution can be you can check for each possibility [00,25,50,75] then keep finding the minimum.

Leetcode problem same as it is - https://leetcode.com/problems/minimum-operations-to-make-a-special-number/
*/