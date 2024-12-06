#include <bits/stdc++.h>
using namespace std;

// Constants
const int MOD = 1e9 + 7;
#define ios                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

// Utils
#define int long long
#define vi vector<int>
#define vii vector<vector<int>>
#define vip vector<pair<int, int>>
#define pii pair<int, int>
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
    int n;
    cin >> n;

    int ans = 1;
    while (n)
    {
        int digit = n % 10;
        n /= 10;
        int count = 0;
        loop(i, 0, digit + 1)
        {
            loop(j, 0, digit + 1)
            {
                if (digit - i - j >= 0)
                {
                    count++;
                }
            }
        }

        ans *= count;
    }

    cout << ans << endl;
}
/*
Agr tu randomly koi bhi 3 number lelega and jinka sum n ke equal hai and agr digits ka sum carry ho rha hai toh vo pakka n ki dig sum se jyada aayega toh digits ka sum add karte samay you have to make sure ki carry na ho warna extra hi aayega.

3 num find karne hai and unka sum n ke equal and digsum too toh m ek kaam karta hu ki n ki jo unit place ki digit hai and baaki 3 number ke unit place ki digit ka sum hai vo n ki unit place ki digit ke equal kardeta hu and same for first place hundred place and so on... is se kya hoga ki digsum same ho jayega and at the end teeno number ka sum n ke equal ho jayega.
eg - 88 then 26 + 62 = 88 digsum 8 + 8 = 16 and unit place ki digit dekho 6+2 = 8 and 2 + 6 = 8 toh sum and digsum both same ab saare combinations nikal lo loop laga ke pehle i j 0 se start till digit tak carry ni karna means digit - i - j >= 0 hona chahiye km ni...jabhi carry ni hoga and extra bhi ni aayega.
*/

int32_t main()
{
    ios;

    int t;
    cin >> t;

    while (t--)
    {
        vishu();
    }
    return 0;
}