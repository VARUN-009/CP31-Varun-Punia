#include <bits/stdc++.h>
using namespace std;
#define ll long long

void vishu()
{
    int n;
    cin >> n;
    int neg = 0, pos = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;

        if (data == -1)
        {
            neg++;
        }
        else
        {
            pos++;
        }
    }

    // first check for the sum >= 0 m chahta hu ki 1 mere atleast equal ho jaye -1 if km hai toh
    if (pos < neg)
    {
        while(pos < neg) {
            pos++;
            neg--;
            ans++;
        }
    }

    // for product=1 I want ki -1 mere even ho
    if(neg % 2) {
        ans++;
    }

    cout << ans << endl;
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