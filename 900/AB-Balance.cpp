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
    string str;
    cin >> str;

    // twist bss itna hai ki agr first and last character same hai toh ab will always be equal to ba.
    // and agr ni hai toh make them equal 
    // kabhi kabhi lagta hai ki mere andar hi dimaag ni hai, itni ittu si cheej ni observe kar paya m

    if (str[0] == str[len(str) - 1])
    {
        cout << str << endl;
    }
    else
    {
        str[0] = str[len(str) - 1];
        cout << str << endl;
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