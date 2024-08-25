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
#define rloop(i, b, a) for (int i = (b) - 1; i >= a; i--)
#define trav(a, x) for (auto &a : x)

// Helper Functions
bool odd(int num) { return ((num & 1) == 1); }
bool even(int num) { return ((num & 1) == 0); }

void vishu()
{
    string s, t;
    cin >> s >> t;

    if (s == t)
    {
        cout << "YES" << endl;
        return;
    }

    map<char, int> mp;

    // store karlo ki konse konse characters chahiye tumhe and kitne hai
    trav(ch, t)
    {
        mp[ch]++;
    }
    string pattern = "";
    // ab hume end se start karna padega kyuki starting se karege toh chances hai ki vo characters hamare delete ho jaye game m toh m chahuhga ki end se characters lu jo jo mere t string m hai
    rloop(i, len(s), 0)
    {
        if (mp[s[i]] > 0)
        {
            pattern += s[i];
            mp[s[i]]--;
        }
    }
    reverse(all(pattern));

    // end se hi start karunga and jaise hi jitne characters mujhe chahiye the m ruk jaunga and then reverse karke check karunga ki same string bani hai ya ni -- s m jo ye t string hai na m chahta hu s m iss t ke baad koi aisa char na ho jo t m ho kyuki phir first occurence m vo character jayega jo t m hoga hence NO

    if (pattern == t)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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