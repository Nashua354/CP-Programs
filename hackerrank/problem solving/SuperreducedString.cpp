#include <iostream>
#include <string>
using namespace std;
void removeDuplicate(string &str, int index)
{
    for (int i = index; i < str.size() - 2; ++i)
    {
        str[i] = str[i + 2];
    }
    str.resize(str.size() - 2);
}
int main()
{
    string str;
    cin >> str;
    for (int i = 0; i < str.size(); ++i)
    {
        if (str[i] == str[i + 1])
        {
            removeDuplicate(str, i);
            i = -1;
        }
    }
    if (str.size() == 0)
        cout << "Empty String" << endl;
    else
        cout << str << endl;
    return 0;
}