#include <bits/stdc++.h>
using namespace std;
#define ll long long

void vishu()
{
    // The main idea is that if at any given point the cells at positions \(i+1\) and \(i-1\) are filled, then the cell in between will automatically get filled as well. So, just move the water from the middle cell to the unfilled cells. If the middle cell becomes empty but the cells before and after it have water, it will get filled again. 
    // if there is ... then i only have to fill i+1 and i-1 rest all of the empty cells will be filled by i pos and if there is not a pattern in it, then i have to fill all cells individually.
    int n;
    cin>>n;

    string s;
    cin>>s;

    if(s.find("...") != string::npos) {
        cout << 2 << endl;
    }
    else {
        cout << count(s.begin(), s.end(), '.') << endl;
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