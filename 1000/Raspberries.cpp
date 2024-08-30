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
    int n, k;
    cin >> n >> k;

    vi(n);
    loop(i, 0, n)
    {
        cin >> vec[i];
    }

    // Product of 2 even numbers is always a multiple of 4
    int evencount = 0;
    int diff = 10;
    
    // sabse pehle to even numbers ka count nikalo and then check bhi karo ki jo k hai uska multiple bnane m kitna diff aarha hai jo sabse minimum hai usko lelo

    loop(i, 0, n)
    {
        if (even(vec[i]))
        {
            evencount++;
        }

        if (vec[i] % k == 0)
        {
            diff = 0;
        }
        else
        {
            diff = min(diff, k - vec[i] % k);
        }
    }

    // ab dekho agr 2 3 5 hai ye prime hai toh pakka aisa number hona chahiye ek jo inse divide ho sake toh jo diff aarha hai vahi dedo

    // and for case when 1 even is there ya toh m  1 odd ko even bna du 1 add karke usme ya jo diff dono ka min and also if no even are there either diff or make 2 odd even dono ka min
    if (k != 4)
    {
        cout << diff << endl;
    }
    else
    {
        if (evencount >= 2)
        {
            cout << 0 << endl;
        }
        else if (evencount == 1)
        {
            cout << min(diff, 1LL) << endl;
        }
        else
        {
            cout << min(2LL, diff) << endl;
        }
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