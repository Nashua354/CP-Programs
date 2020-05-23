#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the queensAttack function below.

int queensAttack(int n, int k, int rq, int cq, vector<vector<int>> obstacles)
{

    int res = 0;
    int dirs[8];
    dirs[0] = n - cq;
    dirs[2] = n - rq;
    dirs[4] = cq - 1;
    dirs[6] = rq - 1;
    dirs[1] = min(dirs[0], dirs[2]);
    dirs[3] = min(dirs[2], dirs[4]);
    dirs[5] = min(dirs[4], dirs[6]);
    dirs[7] = min(dirs[6], dirs[0]);

    while (k--)
    {
        int y = obstacles[k][0] - rq;
        int x = obstacles[k][1] - cq;
        float slope = atan2(y, x) * (180 / M_PI);
        if (slope < 0)
            slope += 360;
        if (!fmod(slope, 45))
        {
            int index = slope / 45;
            int distance = max(abs(y), abs(x)) - 1;
            dirs[index] = min(dirs[index], distance);
        }
    }
    for (int i = 0; i < 8; res += dirs[i++])
        ;
    return res;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nk_temp;
    getline(cin, nk_temp);

    vector<string> nk = split_string(nk_temp);

    int n = stoi(nk[0]);

    int k = stoi(nk[1]);

    string r_qC_q_temp;
    getline(cin, r_qC_q_temp);

    vector<string> r_qC_q = split_string(r_qC_q_temp);

    int r_q = stoi(r_qC_q[0]);

    int c_q = stoi(r_qC_q[1]);

    vector<vector<int>> obstacles(k);
    for (int i = 0; i < k; i++)
    {
        obstacles[i].resize(2);

        for (int j = 0; j < 2; j++)
        {
            cin >> obstacles[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = queensAttack(n, k, r_q, c_q, obstacles);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string)
{
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [](const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ')
    {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos)
    {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
