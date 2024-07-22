#include <bits/stdc++.h>
using namespace std;
#define ll long long

void vishu()
{
    int stations, point;
    cin >> stations >> point;

    vector<int> vec(stations);
    for (int i = 0; i < stations; i++)
    {
        cin >> vec[i];
    }
    int petrol = 0;
    petrol = max(petrol, vec[0]);
    for (int i = 1; i < stations; i++)
    {
        petrol = max(petrol, (vec[i] - vec[i - 1]));
    }
    petrol = max(petrol, (point - vec[stations-1])*2);
    cout << petrol << endl;
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