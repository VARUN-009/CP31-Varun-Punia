#include <bits/stdc++.h>
using namespace std;
#define ll long long

void vishu()
{
    int n;
    cin >> n;

    string str;
    cin >> str;

    int start = 0;
    int end = str.length() - 1;

    while (start <= end)
    {
        if (str[start] == str[end])
        {
            cout << end - start + 1 << endl;
            return;
        }
        start++;
        end--;
    }

    cout << 0 << endl;
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