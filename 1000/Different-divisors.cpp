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

int primenum(int n)
{
    for (int i = n;; i++)
    {
        bool found = true;
        // till sqrt(i) because kyuki agr hum prime factorisation karte hai pair nikalte hai then sqrt(n) ke baad vo repeat hona start kardete hai so an effecient approach.

        // you can also do j*j <= i as j*j ke baad pairs repeat karna start prime factorisation kiya toh effecient approach 
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                found = false;
                break;
            }
        }

        if (found)
        {
            return i;
        }
    }
}

void vishu()
{
    int d;
    cin >> d;

    /*
    1. agr koi number pq or p^3 ki form m hai toh that means ki uske bss 4 hi divisors hoge (1,p,q,x) or (1,p,p^2, p^3) and agr koi number hai jiske divisorrs jyada ho jayege means vo number badega toh we always want that number jiske divisors bss 4 hi ho where p and q are prime numbers.

    2. ab dekho 1 toh hoga hi toh generate form 1+d and then p1+d jiss se ki atleast d ka distance to maintain rahe.

    3. ab hamare pass prime factors bhi hai vo toh ho hi gya ki minimum 4 divisors ho ab abhi humne dekha ki it can eithet in pq form or p^3 form so jo isme se chota ho vo return karwa do.

    isme bss ye hi tha ki a number having 4 divisors is always in the form of pq or p^3 baaki bss gap m prime factors nikalo and jo form chotti hai vo return.
    */
    int p = primenum(1 + d);
    int q = primenum(p + d);

    cout << min(p * p * p, p * q) << endl;
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