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
#define stoll stoi

// Control Flow
#define loop(i, a, b) for (int i = a; i < (b); i++)
#define rloop(i, a, b) for (int i = (b)-1; i >= a; i--)
#define trav(a, x) for (auto &a : x)

// Helper Functions
bool odd(int num) { return ((num & 1) == 1); }
bool even(int num) { return ((num & 1) == 0); }


void vishu()
{
    int n;
    cin>>n;

    // dekho agr 2 se divide ho hi gya vo poora then not possible kyuki prime factorisation karege toh start toh 2 se hi karege and agr aisa hua ki 2 se ni divide ho rha toh pakka ek odd number hi hoga ab >1 eg - 3
    
    while(n % 2 == 0) {
        n /= 2;
    }

    if(n==1) {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
}

int32_t main()
{
    int t;
    cin >> t;

    while(t--)
    {
        vishu();
    }
    return 0;
}