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
    int n, p;
    cin >> n >> p;
    vector<pair<int, int>> vec(n);

    loop(i, 0, n)
    {
        cin >> vec[i].second;
    }

    loop(i, 0, n)
    {
        cin >> vec[i].first;
    }

    // ek tareeka ye bhi hai na ki chanek khud hi sabko bta de toh isko bhi consider karna padega 
    vec.push_back({p, n});

    // sort kardo jiss se ki sabse km cost wala sabse pehle aajaye -- ab cost = p because chanek bss starting m ek baar toh kisi ko btayega hi toh sabse chotte cost wale ko bta de and covered 1 ho hi jayega uske baad chanek ko directly btane ki need ni hai need tab hi hogi jab chanek ka individually btana better hai na ki members ka share karna because of cost...chanek ke btane ki cost km  
    
    sort(vec.begin(), vec.end());

    int cost = p;
    int covered = 1;
    int idx = 0;
    while (covered < n)
    {

        int left = n - covered;

        if (left >= vec[idx].second)
        {
            cost += vec[idx].first * vec[idx].second;
            covered += vec[idx].second;
        }
        else
        {
            cost += vec[idx].first * left;
            covered = n;
        }

        idx++;
    }

    cout << cost << endl;
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