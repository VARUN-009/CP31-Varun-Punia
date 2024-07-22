#include <bits/stdc++.h>
using namespace std;
#define ll long long

void vishu()
{
    int n;
    cin >> n;

    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end());
    int ele = vec[0];
    int cnt = count(vec.begin(), vec.end(), ele);
    if (cnt == n)
    {
        cout << -1 << endl;
        return;
    }
    cout << cnt << " " << n - cnt << endl;
    for (int i = 0; i < cnt; i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
    for (int i = cnt; i < n; i++)
    {
        cout << vec[i] << " ";
    }
}
// The main twist is that just divide smallest element and rest of the other elements. For eg - you can divide 8/1 but you can't divide 1/8 so in b array only keep smallest elements and in c array only keep other elements, I have not made separate arrays but you can make too -- divisor means that it can divide, dividend means the number we are going to divide -- 4 is a divisor of 12 but 12 is not a divisor of 4

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