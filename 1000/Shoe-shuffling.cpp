#include <bits/stdc++.h>
using namespace std;

// Constants
const int MOD = 1e9 + 7;

// Utils
#define int long long
#define vi vector<int>
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
int __lcm(int a, int b) { return (a * b) / __gcd(a, b); }

void vishu()
{
    int n;
    cin >> n;

    map<int, int> mp;

    vi vec(n);
    loop(i, 0, n)
    {
        cin >> vec[i];
        mp[vec[i]]++;
    }

    // dekho agr aisa hua ki size unique hai aur kisi ka ni hai toh -1 hoga answer kyuki jaise bhi karke dekhlo kisi bade ko phir kisi chote ka shoe dena padega  
    trav(ele, mp)
    {
        if (ele.second == 1)
        {
            cout << -1 << endl;
            return;
        }
    }

    // jab tak same aarahe hai toh next wale ka idx+1 karte raho and alg ho toh jahan se same aane lage vo idx and then idx ko set karo aage 
    int idx = 0;
    loop(i, 0, n - 1)
    {
        if (vec[i] == vec[i + 1])
        {
            cout << i + 2 << " ";
        }
        else
        {
            cout << idx + 1 << " ";
            idx = i + 1;
        }
    }

    cout << idx + 1 << endl;
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