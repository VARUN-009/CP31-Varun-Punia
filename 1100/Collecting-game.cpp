#include <bits/stdc++.h>
using namespace std;

void countLargerElements(const vector<int> &arr)
{
    int n = arr.size();
    vector<int> result(n, 0); // Result array to store the counts

    // Loop through each element of the array
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        // Compare with every other element
        for (int j = 0; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                count++;
            }
        }
        result[i] = count;
    }

    // Print the result
    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;

        cin >> n;

        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        countLargerElements(arr);
    }

    return 0;
}
