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


// rows 2023 ho sakti hai max toh 2023*2023 ki matrix bna lo
vii vec(2023, vector<int>(2023, 0));

// m har number ka store kar rha hu and for 2023 rows, uss se pehle 2022 rows hai and har row m utne hi numbers hai like 5th row m 5 number hai toh upr ke 2022 numbers ka sum lelo n*(n+1) / 2 se toh usko thoda badha do toh meine random 200000000 leliya hai for safer side...ans iske andar hi lie karega and loop bhi 2023 times extra hi chlega par iske andar answer aa hi jayega.
vi ans(20000000);
int curr = 1;

void vishu()
{
    int n;
    cin >> n;

    // jo number aayega usko hum pehle hi nikal chuke hoge ans m toh bss ans[n] and humne bss jo question m grid hai usko rotate kardiya hai left ki taraf toh aisa sequence aaya and uska har diagonal ek row ho jayega given sequence ki.
    cout << ans[n] << endl;
}

int32_t main()
{
    ios;

    loop(i, 1, 2024)
    {
        // better to do this like 2nd row m ho toh 1st row ka answer nikal rahe hai and 3rd m ho toh 2nd ka iss se if ki conditions nhi lagani padegi nikalte samay so kaam easy.
        // m diagonal jo hai usko neeche se upr traverse kar rha hu jiss se number wise hi ans m store ho and upr ka liya left ka liya and current jo number hai uska square add kiya and diagonal minus kiya kyuki left and upr ka add karte time diagonal 2 baar add ho rha hai toh usko 1 baar htane ke liye.
        rloop(j, i, 1)
        {
            // uss cell m up + left and then diagonal minus and jo number hai uska square add.
            vec[j][i - j] = vec[j - 1][i - j] + vec[j][i - j - 1] - vec[j - 1][i - j - 1] + curr * curr;
            ans[curr] = vec[j][i - j];
            curr++;
        }
    }

    int t;
    cin >> t;

    while (t--)
    {
        vishu();
    }
    return 0;
}