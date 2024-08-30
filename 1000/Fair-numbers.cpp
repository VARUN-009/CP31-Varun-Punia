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

bool isItFair(int num)
{
    int n = num;
    while (n)
    {
        int digit = n % 10;
        if (digit != 0 && num % digit != 0)
        {
            return false;
        }

        n /= 10;
    }

    return true;
}

void vishu()
{
    int n;
    cin >> n;

    // ek super fair number which is divisible by digits 1-9 is 2520 as LCM(1,2,...9) = 2520 toh bhai ye toh pakka pakka fair number hai hi kyuki 2 5 2 se divide ho hi rha hai ye toh worst case m har 2520 iterations m mujhe ek fair mil hi jayega toh you'll never get TLE. 
    while (!isItFair(n))
    {
        n++;
    }
    cout << n << endl;
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