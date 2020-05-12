#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    map<string, string> phoneBook;
    while (t--)
    {
        string name, phone;
        cin >> name;
        cin >> phone;
        phoneBook.insert(pair<string, string>(name, phone));
    }
    string test;
    while (cin >> test)
    {
        auto itr = phoneBook.find(test);
        if (itr == phoneBook.end())
            cout << "Not found" << endl;
        else
            cout << itr->first << "=" << itr->second << endl;
    }
    return 0;
}