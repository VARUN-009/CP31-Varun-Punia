#include <bits/stdc++.h>
using namespace std;
#define ll long long

int helper(int i, int j) {
    // we have to tell simply if X is at this particular row or at this particular col, then we'll give this score. That's why we have used || here, if it lies at any of the 4 points we have mentioned, then return that value 
    if(i==0 || i==9 || j==0 || j==9) {
        return 1;
    }
    else if(i==1 || i==8 || j==1 || j==8) {
        return 2;
    }
    else if(i==2 || i==7 || j==2 || j==7) {
        return 3;
    }
    else if(i==3 || i==6 || j==3 || j==6) {
        return 4;
    }
    else {
        return 5;
    }
}

void vishu()
{
    char grid[10][10];
    for(int i=0; i<10; i++) {
        for(int j=0; j<10; j++) {
            cin >> grid[i][j];
        }
    }
    
    int ans = 0;

    for(int i=0; i<10; i++) {
        for(int j=0; j<10; j++) {
            if(grid[i][j] == 'X') {
                ans += helper(i, j);
            }
        }
    }

    cout << ans << endl;
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