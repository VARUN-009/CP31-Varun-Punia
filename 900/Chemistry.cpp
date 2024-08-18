#include <bits/stdc++.h>
using namespace std;
#define int long long

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

#define int long long
#define vi vector<int> vec

void vishu()
{
    int n,k;
    cin>>n>>k;

    string str;
    cin >> str;

    map<char,int> mp;
    for(auto ch : str) {
        mp[ch]++;
    }

    int odds = 0;

    for (auto word : mp) {
        if(odd(word.second)) {
            odds++;
        }
    }

    // agr k==odds then tab bhi baat bn jayegi sabko even bna do 1 1 km karke 
    // agr k== odds - 1 tab bhi baat bn jayegi ki sirf 1 hi odd reh jayega toh palindrome b jayega as palidnrome ke andar at max sirf 1 hi odd ho sakta hai 
    // par agr odds-1 se bhi km hai example odds=5 and k=3 then 2 odd reh hi jayege tab ni bn payega 
    if(odds - 1 > k) {
        cout << "NO" << endl;
    }
    else {
        cout << "YES" << endl;
    }


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

/*
To check if a string can be a palindrome just check ki how many chars with odd freq is there. if it is > 1 then not possible.

ek string de rakhi hai and check karna hai ki usko palindrome bna sakte ho then sabse pehle ye hi check karna ki odd 1 hai na then har character ka n/2 right m and n/2 left basically half right m and half left m and odd char hai toh usko middle m else left+right

*/