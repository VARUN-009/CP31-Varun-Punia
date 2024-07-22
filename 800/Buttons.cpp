#include <bits/stdc++.h>
using namespace std;
#define ll long long

void vishu()
{
    int a, b, c;
    cin >> a >> b >> c;

    if(a==b) {
        if(c % 2 == 0 ) {
            cout << "Second" << endl;
            return;
        }
        else {
            cout << "First" << endl;
            return;
        }
    }
    else {
        a > b ? cout << "First" << endl : cout << "Second" << endl; 
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