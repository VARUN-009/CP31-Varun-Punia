#include <bits/stdc++.h>
using namespace std;
#define ll long long

void vishu()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    // shortest path will be ki m sabse pehle y ke same horizontal level m aajau means ki diagonally move karu and then left move karlu -- diagonally then left

    // ab aisa na ho ki m jis diagonally move kar rha hu uske neeche y2 na ho kyuki m neeche ni jaa sakta only diagonally up and left
    if (y2 < y1)
    {
        cout << -1 << endl;
        return;
    }

    // go diagonally
    int ans = y2 - y1;

    // diagonally move kar rahe ho toh x bhi bdd rha hai toh x ki value badhao
    x1 += ans;

    // aisa na ho ki x2 wala point right side m ho we want ki left side m ho jiss se ki left move karu
    if (x1 < x2)
    {
        cout << -1 << endl;
        return;
    }

    cout << ans + (x1 - x2) << endl;
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