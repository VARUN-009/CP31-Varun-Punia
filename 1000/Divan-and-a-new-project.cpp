#include <bits/stdc++.h>
using namespace std;

// Constants
const int MOD = 1e9 + 7;

// Utils
#define int long long
#define vi vector<int>
#define vii vector<vector<int>>
#define vip vector<pair<int, int>>
#define len(x) (x).size()
#define pb push_back
#define all(n) n.begin(), n.end()
#define rall(n) n.rbegin(), n.rend()
#define stoi stoll
#define pii pair<int, int>

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

    vip buildings(n + 1);
    // jo building sabse jyada baar visit ho rahi hai usko apne pass rakho and headquarter wali origin 0 m rakho wahan se hi sab jagah jana hai - 0th building origin m 0 m then uske baad se pass pass rakho left right
    loop(i, 1, n + 1)
    {
        cin >> buildings[i].first;
        buildings[i].second = i;
    }

    sort(buildings.begin() + 1, buildings.end(), greater<pii>());

    int total_time = 0;
    vi ans(n + 1);
    int number = 1;
    loop(i, 1, n + 1)
    {
        total_time += 2 * number * buildings[i].first;

        // ans ke andar coordinates hai ki oehli building kahan hai dusri kahan hai toh jo bhi building hai buildings wale array m dekho vo konse number ki building hai then uss index m uss number ko daldo distance
        if (odd(i))
        {
            ans[buildings[i].second] = number;
        }
        else
        {
            ans[buildings[i].second] = -number;
            number++;
            // har 2nd time m number++ hoga kyuki like 0 m hai then 1 m then -1 m then 2 hoga vo
        }

        
    }

    cout << total_time << endl;
    trav(ele, ans)
    {
        cout << ele << " ";
    }
    cout << endl;
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