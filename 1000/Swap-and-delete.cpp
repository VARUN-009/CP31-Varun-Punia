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
    /*Dekho chances hai ki 4th test case hi samajh m na aaye toh 111100 - this is the original string that id given to us "Note that you are comparing the resulting string t
    with the initial string s." so agr you made 0011 still if you compare it with the first string s then char at pos 3 & 3 will match. All you have to do is check ki 0 hai toh 1 hai and agr 1 hai toh 0 hai kya
    */

    string str;
    cin >> str;

    vector<int> count(2, 0);
    trav(ch, str)
    {
        count[ch - '0']++;
    }

    // Property of XOR - if both are same then 0 and for different 1
    loop(i, 0, len(str))
    {
        int req = (str[i] - '0') ^ 1;
        if (count[req] == 0)
        {
            cout << len(str) - i << endl;
            return;
        }
        count[req]--;
    }

    cout << 0 << endl;
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