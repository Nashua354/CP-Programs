#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (i % 2 == 0)
                cout << s[i];
        }
        cout << " ";
        for (int i = 0; i < s.size(); i++)
        {
            if (i % 2 != 0)
                cout << s[i];
        }
        cout << endl;
    }
    return 0;
}
