#include <bits/stdc++.h>
using namespace std;
#define ll long long

void vishu()
{
    int n;
    cin >> n;

    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    // agr koi bhi 2 number ka gcd <= 2 ho gya then ab bhle hi aage koi bhi number ho ya tih gdc 2 hi rahega ya 2 se bhi km hi ho jayega like odd hua toh 1 ho jayega 2 gcd tha toh and even hai toh 2 hi rahega and agr ko 2 number aise ni mile jinka gcd <= 2 hai then no answer.
    // vo 2 number milte hi hum unko sabse aage lga lege toh ans aajayega 
    bool found = false;
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(__gcd(vec[i], vec[j]) <= 2) {
                found = true;
                cout << "Yes" << endl;
                return;
            }
        }
    }

    if (found)
    {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
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