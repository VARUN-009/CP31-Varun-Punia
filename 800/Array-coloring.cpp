#include <bits/stdc++.h>
using namespace std;
#define ll long long

void vishu()
{
    int n;
    cin>> n;

    vector<int> vec(n);
    for(int i=0; i<n; i++) {
        cin >> vec[i];
    }

    int sum = accumulate(vec.begin(), vec.end(), 0);
    if(sum % 2 == 0) {
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