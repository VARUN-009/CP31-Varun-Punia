#include <bits/stdc++.h>
using namespace std;
#define ll long long

void vishu()
{
    int n;
    cin >> n;
    int neg = 0, pos = 0;
    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;

        if (data == -1)
        {
            neg++;
        }
        else
        {
            pos++;
        }
    }

    if (neg == n)
    {
        cout << n << endl;
        return;
    }

    if (pos == n)
    {
        cout << 0 << endl;
        return;
    }

    if (pos >= neg)
    {
        if (neg % 2 != 0)
        {
            cout << 1 << endl;
            return;
        }
        else
        {
            cout << 0 << endl;
            return;
        }
    }

    if (neg > pos)
    {
        int total = (neg + pos);
        // cout << req << endl;
        if(total % 2 == 0) {
            cout << (total/2) - pos << endl;
        }
        else {
            int req = (total/2) + 1; // 1 extra for odd
            if((total - req) % 2 != 0) {
                cout << req - pos + 1 << endl;
            }
            else {
                cout << req - pos << endl;
            }
        }
        
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