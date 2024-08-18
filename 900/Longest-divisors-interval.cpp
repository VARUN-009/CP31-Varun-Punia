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

// Helper Functions
bool odd(int num) { return ((num & 1) == 1); }
bool even(int num) { return ((num & 1) == 0); }


void vishu()
{
    int n;
    cin>>n;

    // odd number ka toh bss 1 hi hoga na kyuki har odd ke baad ek even number aata hai toh length humesha ek hi rahegi
    if(n % 2 != 0) {
        cout << 1 << endl;
        return;
    }

    // ab baari aayi even numbers ki toh twist ye hi hai tum koi bhi sequence lelo uski length jo hai vo humesha 1 se right-left+1 ke equal hogi matlab let's say [7,8,9] hai toh same 1 se start karege toh [1,2,3] hoga.
    // removed the <= part as number can be very large 
    int ans = -1;
    for(int i=1; ; i++) {
        if(n % i != 0) {
            ans = i-1;
            break;
        }
    }

    cout << ans << endl;

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