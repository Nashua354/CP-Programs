#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<vector<int>> a(6);
    for (int i = 0; i < 6; i++)
    {
        a[i].resize(6);

        for (int j = 0; j < 6; j++)
        {
            cin >> a[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    int sum = -999999;
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            int temp = a[i][j] + a[i - 1][j - 1] + a[i - 1][j] + a[i - 1][j + 1] + a[i + 1][j - 1] + a[i + 1][j] + a[i + 1][j + 1];
            if (temp > sum)
                sum = temp;
        }
    }
    cout << sum;
    return 0;
}
