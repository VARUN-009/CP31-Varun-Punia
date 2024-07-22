#include <bits/stdc++.h>
using namespace std;
#define ll long long

void vishu()
{
    int boxes, length;
    cin >> boxes >> length;

    vector<int> vec(boxes);
    for (int i = 0; i < boxes; i++)
    {
        cin >> vec[i];
    }

    if (length == 1)
    {
        vector<int> copy = vec;
        sort(copy.begin(), copy.end());
        if (copy == vec)
        {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    else
    {
        cout << "YES" << endl;
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