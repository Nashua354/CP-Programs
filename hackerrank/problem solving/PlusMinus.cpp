#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int arr_i = 0; arr_i < n; arr_i++)
    {
        cin >> arr[arr_i];
    }
    int p = 0, ne = 0, o = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
            p++;
        else if (arr[i] < 0)
            ne++;
        else
            o++;
    }
    cout << fixed << setprecision(6) << (float)p / n << endl;
    cout << fixed << setprecision(6) << (float)ne / n << endl;
    cout << fixed << setprecision(6) << (float)o / n;
    return 0;
}
