#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> a(5);
    for (int arr_i = 0; arr_i < 5; arr_i++)
    {
        cin >> a[arr_i];
    }
    long int max = 0, min = 0;
    sort(a.begin(), a.end());
    for (int i = 0; i < 4; i++)
        min += a[i];
    for (int i = 1; i < 5; i++)
        max += a[i];
    cout << min << " ";
    cout << max;
    return 0;
}
