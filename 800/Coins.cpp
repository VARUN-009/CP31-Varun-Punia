#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>

void vishu()
{
    ll n, k;
    cin >> n >> k;

    // agr 2 ka multiple hai n toh 2 hi leke kaam chl jayega warna n is odd then k mera 1 hona chahiye jis se ki number bna saku

    if (n % 2 == 0 || k % 2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        vishu();
    }
    return 0;
}

/*
A MORE MATHEMATICAL SOLUTION
#include <bits/stdc++.h>
#include <numeric> // For std::gcd

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        // ax + by = c is called linear diophantine equations and for this to happen gcd(a,b) should divide c basically gcd(a,b) % n == 0. This was a maths oriented question.
        long long n, k;
        cin >> n >> k;

        if (n % std::gcd(2LL, k)) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}

*/