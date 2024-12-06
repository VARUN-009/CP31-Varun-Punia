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
    int n, k;
    cin >> n >> k;

    vi vec(n);
    loop(i, 0, n)
    {
        cin >> vec[i];
    }

    // abhi current jo max hai vo toh ans ho hi sakta hai minimum toh vo toh lena hi hai and max ka ptani ki max kitna ho sakta hai at max toh 1e10;
    // int low = *max_element(all(vec));
    // int high = 1e10;


    // ans mera at max maxele + k ho sakta hai toh high toh ye hi and low ko 0 se start karlo ki minimum ye hi.
    
    int low = 0;
    int high = *max_element(all(vec)) + k;
    int ans = 0;

    while (low <= high)
    {

        // This mid is a possible answer for the maximum element means ki kya ye mera max ele bn sakta hai ya nhi agr ni toh high ko km karege and agr haa toh aur badhayege high ko.
        int mid = low + (high - low) / 2;

        // ab dekho n elements hai toh m n ke liye check karunga ki kya ye element mera max bn sakta hai, kya ye max bn sakta hai and so on...and main thing is agr m ek element ko mid ke equal karna chahta hu toh (mid - ele) operations lagege and uske aage wala element mujhe exactly mid-1 ke equal bnana padega kyuki agr km hua toh possible hi ni hai kyuki ai <= ai+1 and jyada hua means m current element ko aur badha sakta hu phir.
        auto check = [&]() -> bool
        {
            loop(i, 0, n)
            {
                int need = mid;
                int ops = 0;

                loop(j, i, n)
                {
                    int req = need - vec[j];

                    if (req < 1)
                    {
                        if (ops <= k)
                        {
                            return 1;
                        }
                        else
                        {
                            break;
                        }
                    }

                    ops += req;
                    need--;

                    // aisa bhi ho sakta hai ki need jo hai vo minus karne ke baad 0 hi ho jaye par tera element jo hai array ka minimum vo 1 ke eqaul hai ghta thodi sakta hu toh m 1 toh rakhunga hi
                    need = max(need, 1LL);
                }
            }

            return 0;
        };

        // answer aagya iss mid ke liye toh thik hai toh aur aage explore karo and agr nhi aaya toh phir high ko km karo mid-1 ke hi kardo and then naya mid nikal ke check karo ki ans aayega ya. nhi
        if (check())
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    cout << ans << endl;
}

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



/*
ANOTHER SOLUTION USING DIFFERENT APPROCH OF BINARY SEARCH ON ANSWER -- THIS IS INVARIANCE TECHNIQUE

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
    int n, k;
    cin >> n >> k;

    vi vec(n);
    loop(i, 0, n)
    {
        cin >> vec[i];
    }

    // abhi current jo max hai vo toh ans ho hi sakta hai minimum toh vo toh lena hi hai and max ka ptani ki max kitna ho sakta hai at max toh 1e10;
    int low = *max_element(all(vec));
    int high = 1e10;

    while (low < high - 1)
    {

        // This mid is a possible answer for the maximum element means ki kya ye mera max ele bn sakta hai ya nhi agr ni toh high ko km karege and agr haa toh aur badhayege high ko.
        int mid = low + (high - low) / 2;

        // ab dekho n elements hai toh m n ke liye check karunga ki kya ye element mera max bn sakta hai, kya ye max bn sakta hai and so on...and main thing is agr m ek element ko mid ke equal karna chahta hu toh (mid - ele) operations lagege and uske aage wala element mujhe exactly mid-1 ke equal bnana padega kyuki agr km hua toh possible hi ni hai kyuki ai <= ai+1 and jyada hua means m current element ko aur badha sakta hu phir.
        auto check = [&]() -> bool
        {
            loop(i, 0, n)
            {
                int need = mid;
                int ops = 0;

                loop(j, i, n)
                {
                    int req = need - vec[j];

                    if (req < 1)
                    {
                        if (ops <= k)
                        {
                            return 1;
                        }
                        else
                        {
                            break;
                        }
                    }

                    ops += req;
                    need--;

                    // aisa bhi ho sakta hai ki need jo hai vo minus karne ke baad 0 hi ho jaye par tera element jo hai array ka minimum vo 1 ke eqaul hai ghta thodi sakta hu toh m 1 toh rakhunga hi
                    need = max(need, 1LL);
                }
            }

            return 0;
        };

        // answer aagya iss mid ke liye toh thik hai toh aur aage explore karo and agr nhi aaya toh phir high ko km karo mid ke hi kardo and then naya mid nikal ke check karo ki ans aayega ya. nhi
        if (check())
        {
            low = mid;
        }
        else
        {
            high = mid;
        }
    }

    cout << low << endl;
}

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


*/


