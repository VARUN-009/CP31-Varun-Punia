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
    int n;
    cin >> n;

    int count2 = 0;
    int count3 = 0;

    // agr number ke prime factors 2 ya 3 se hatke hai toh ni ho sakta phir toh kyuki hum divide by 6 kar sakte hai which means dividing by 2*3 toh prime number as it is rahege ek dum.
    // toh 2 and 3 se kardo prime factorisation then check karlo bss ki agr 1 hai and 2 <= because let's say end m ek bcha 2 hai toh you cannot remove it.
    while (n % 2 == 0)
    {
        n /= 2;
        count2++;
    }

    while (n % 3 == 0)
    {
        n /= 3;
        count3++;
    }

    // prime factors will be in the form 2*2*2*3*3*3...and so on dividing by 6 means dividing by 2*3
    if (n == 1 && count2 <= count3)
    {
        cout << count3 + (count3 - count2) << endl;
    }
    else
    {
        cout << -1 << endl;
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