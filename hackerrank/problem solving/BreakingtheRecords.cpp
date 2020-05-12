#include <bits/stdc++.h>

using namespace std;

vector<int> getRecord(vector<int> s)
{
    // Complete this function
    vector<int> result = {0, 0};
    int max, min;
    max = s[0];
    min = s[0];
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] > max)
        {
            max = s[i];
            result[0]++;
        }
        if (s[i] < min)
        {
            min = s[i];
            result[1]++;
        }
    }
    return result;
}

int main()
{
    int n;
    cin >> n;
    vector<int> s(n);
    for (int s_i = 0; s_i < n; s_i++)
    {
        cin >> s[s_i];
    }
    vector<int> result = getRecord(s);
    string separator = "", delimiter = " ";
    for (auto val : result)
    {
        cout << separator << val;
        separator = delimiter;
    }
    cout << endl;
    return 0;
}
