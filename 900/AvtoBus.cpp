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
    int n;
    cin >> n;

    // dekho agr odd number hai toh ni bna paoge and agr number mera 4 se km hai tab bhi ni bna paoge 
    if (n & 1 || n < 4)
    {
        cout << -1 << endl;
    }
    else
    // ab maximum chahiye toh m toh ye hi chahunga na ki 4 wali jyada li jaye toh 4 se divide kardo kyuki km number se divide karunga toh answer jyada aayega na iss karke and for case eg - n=10 toh isme max is ki 4 wala lu and 6 wala lu toh iska max ans is 2 and 10/4=2 toh baat wahi hai ki ek 4 km karke 6 wala add kar rahe hai hum

    // minimum chahiye toh m chahunga ki n ko 6 se divide karu and dekho double kyu kar rha result and uski ceil value like n=26 toh 26/6 = 4.32 toh ceil(4.32) = 5 toh ans will be 5 as 3 lu 6 wali and 2 lu 4 wali toh 18+8=26 iss karke double kiya and ceil
    
    {
        int maxi = n / 4;
        int mini = ceil(n / 6.00);
        cout << mini << " " << maxi << endl;
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