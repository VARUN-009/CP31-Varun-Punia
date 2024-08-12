#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vv vector<int> vec

void vishu()
{
    int a, b;
    cin >> a >> b;

    int xk, yk;
    cin >> xk >> yk;

    int xq, yq;
    cin >> xq >> yq;

    vector<vector<int>> directions = {{a, b}, {a, -b}, {-a, b}, {-a, -b}, {b, a}, {b, -a}, {-b, a}, {-b, -a}};

    // we have to take a set, can't take a map as repeated values will also be stored in it.
    set<pair<int,int>> st1, st2;
    int count = 0;

    for (auto direction : directions)
    {
        int newx = xk + direction[0];
        int newy = yk + direction[1];

        int newqx = xq + direction[0];
        int newqy = yq + direction[1];

        st1.insert({newx, newy});
        st2.insert({newqx, newqy});
    }

    for (auto data : st1)
    {
        if (st2.find(data) != st2.end())
        {
            count++;
        }
    }

    cout << count << endl;
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