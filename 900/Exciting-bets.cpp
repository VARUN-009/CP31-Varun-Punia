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
    int a, b;
    cin >> a >> b;

    if (a == b)
    {
        cout << 0 << " " << 0 << endl;
    }
    else
    {
        // dekho a-b toh same hi rahega kyuki ya toh tum dono number ko 1 se badhaoge ya 1 se ghataoge toh a-b will be constant and one property os gcd is that if a>b gcd(a,b) = gcd(a-b, b) ab a-b tumahre pass hai and a-b is contant toh m chahunga ki b ko a-b ke equal kardu because gcd(x,x) = x eg - a-b = 10 and b is 17 toh either make 17 to 10 or make 17 to 20 - choose the smallest path.
        int max_excitment = abs(a - b);
        int second_val = b % max_excitment;
        cout << max_excitment << " " << min(second_val, max_excitment - second_val) << endl;
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