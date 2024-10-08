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

void vishu()
{
    int n;
    cin >> n;

    // if a and b are two numbers and a <= b and b%a==0 then lcm of a b is b toh aisa chahiye jo factor ho and then since a + b = n so m chahta hu bade se bada a ho jiss se ki b km ho jaye toh a factor toh rahega hi b ka and b km because a badd jayega toh we will get the lowest lcm.
    // sqrt tak hi check kiya hai isko jaan ke uske baad repeat hoge 
    // if a%b == 0 then a/b % b == 0 eg 50/10 rem=0 then 10/10 rem=0 aise 
    int num = 1;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            num = n / i;
            break;
        }
    }

    cout << num << " " << n - num << endl;
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
