#include <bits/stdc++.h>
using namespace std;
#define ll long long

void vishu()
{
    int n, m;
    cin >> n >> m;

    string x;
    cin >> x;

    string s;
    cin >> s;

    // the main thing here is that since n*m <= 25 so in worst case scenario, n=1 and m=25 so either the answer will be -1 incase that character is not there or we'll keep adding it so it will become 2, then 4 then 8 then 16 then 32 - 5 steps so we have to check only 5 times at max. 0 for the case when both are equal and then 5 more steps to check so that's why loop from 0 till less than 6 -- 0 + 5 chances
    // This is the most optimal answer, you can also run the loop for 10 or more times, no worries.

    for(int i=0; i<6; i++) {
        if(x.find(s) != string::npos) {
            cout << i << endl;
            return;
        }
        x += x;
    }
    cout << -1 << endl;
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