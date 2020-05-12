#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s)
{
    /*
     * Write your code here.
     */
    int hr = stoi(s.substr(0, 2));
    if (s[8] == 'P')
    {

        if (hr != 12)
        {
            hr += 12;
            s[1] = hr % 10 + 48;
            s[0] = hr / 10 + 48;
        }
    }
    else
    {
        if (hr == 12)
        {
            hr -= 12;
            s[1] = hr % 10 + 48;
            s[0] = hr / 10 + 48;
        }
    }
    return s.substr(0, 8);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
