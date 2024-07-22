#include <bits/stdc++.h>
using namespace std;
#define ll long long

void vishu()
{
    int n;
    cin>>n;

    vector<int> vec(n);
    for(int i=0; i<n; i++) {
        cin >> vec[i];
    }

    if(vec[0] == 1) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
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