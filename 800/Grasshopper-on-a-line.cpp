#include <bits/stdc++.h>
using namespace std;
#define ll long long

void vishu()
{
    int x, k;
    cin>>x>>k;

    int diff = 1;

    // if x is not divisible by k, then take x jump only, only 1 step needed.

    if(x % k != 0) {
        cout << 1 << endl;
        cout << x << endl;
        return;
    }

    // else divide them into parts like 9,1 8,2 7,3 and so on only till half of x as from then it will be like 3,7 which you have already covered.
    for(int i=x-1; i>=x/2; i--) {
        if(i%k != 0 && diff%k != 0 && diff+i==x) {
            cout << 2 << endl;
            cout << i << " " << diff << endl;
            return;
        }
        diff++;
    }
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        vishu();
    }
    return 0;
}