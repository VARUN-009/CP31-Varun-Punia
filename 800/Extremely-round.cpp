#include <bits/stdc++.h>
using namespace std;
#define ll long long

// just to check whether the number is a extremely round number or not.
bool check(int num)
{
    string str = to_string(num);
    int count = 0;
    for (auto ch : str)
    {
        if (ch != '0')
        {
            count++;
        }
        if (count >= 2)
        {
            return false;
        }
    }

    return count == 1;
}

void vishu(vector<int> &vec)
{
    int n;
    cin >> n;

    int ans = 0;

    for (auto num : vec)
    {
        if (num <= n)
        {
            ans++;
        }
        else
        {
            break;
        }
    }

    cout << ans << endl;
    return;
}
// Trick is to calculate naivley whether a number is extremely round or not, we did it before the while t loop because otherwise the TC will be O(t*1000000) so we did it before and then just count from the array, if it's less than n, means it is in the required range and one of the answer.

int main()
{
    int t;
    cin >> t;

    vector<int> vec;
    for (int i = 1; i <= 1000000; i++)
    {
        if (check(i))
        {
            vec.push_back(i);
        }
    }

    while (t--)
    {
        vishu(vec);
    }
    return 0;
}