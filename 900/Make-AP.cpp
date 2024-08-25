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

    int a, b, c;
    cin >> a >> b >> c;

    // we have three numbers so check karna hai ki AP bn sakti hai ya ni toh m ek kaam karleta hu ki baari baari check karleta hu ki AP bnegi ya ni pehle a then b then c warna answer is no
    // check for a
    int newa = (2 * b - c);
    if (newa >= a && newa % a == 0)
    {
        cout << "YES" << endl;
        return;
    }

    // check for b
    // iske andar c-a % 2 == 0 because c-a should be even jabhi toh m usko 2 equal part m divide kar paunga na
    int newb = (c + a) / 2;
    if (newb >= b && (c - a) % 2 == 0 && newb % b == 0)
    {
        cout << "YES" << endl;
        return;
    }

    // check for c --  newc newb newa humesha mera bada hona chahiye kyuki jabhi m usko divide karunga a,b,c se toh tabhi mera +ve integer aayega and poora poora divide hona chahiye 
    int newc = 2 * b - a;
    if (newc >= c && newc % c == 0)
    {
        cout << "YES" << endl;
        return;
    }

    cout << "NO" << endl;
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