#include <iostream>
#include <string>
using namespace std;
int main()
{
    int q;
    cin >> q;
    string hack = "hackerrank";
    while (q--)
    {
        int j = 0;
        string str;
        cin >> str;
        for (int i = 0; str[i] != '\0'; ++i)
        {
            if (str[i] == hack[j])
            {
                ++j;
            }
            if (j >= hack.size())
            {
                break;
            }
        }
        if (j == hack.size())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
