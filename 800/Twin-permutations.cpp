#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vv vector<int> vec

void vishu()
{
    int n;
    cin >> n;

    vv(n);

    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    // Twist is that har place ka sum like a1+b1 ... an+bn i want ki ye n+1 ke equal ho jaye ab ye kaise aaya see the sample test case 3 2 1 --> 1 2 3 so every position gives me 4 so n+1

    for (int i = 0; i < n; i++)
    {
        cout << n - vec[i] + 1 << " ";
    }
    cout << endl;
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