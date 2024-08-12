#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vv vector<int> vec

void vishu()
{
    int n;
    cin >> n;

    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    // pehla element toh mangta hi apne ko toh vo toh lelo ab ye check karlo ki uss se pehle wala element 1 toh ni hai kyuki agr 1 hua toh tum 1 ni dal sakte kyuki phir <= 1 so extra 1 and agr 1 ni hai toh 1 daldo and then that element. 
    vector<int> res;
    res.push_back(vec[0]);
    for(int i=1; i<n; i++) {
        if(vec[i-1] >= 2) {
            res.push_back(1);
        }
        res.push_back(vec[i]);
    }

    cout << res.size() << endl;
    for(auto ele : res) {
        cout << ele << " ";
    }
    cout << endl;
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