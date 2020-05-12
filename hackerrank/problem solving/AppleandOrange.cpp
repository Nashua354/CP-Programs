#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main()
{
    int s;
    int t;
    cin >> s >> t;
    int a;
    int b;
    cin >> a >> b;
    int m;
    int n;
    cin >> m >> n;
    vector<int> apple(m);
    for (int apple_i = 0; apple_i < m; apple_i++)
    {
        cin >> apple[apple_i];
    }
    vector<int> orange(n);
    for (int orange_i = 0; orange_i < n; orange_i++)
    {
        cin >> orange[orange_i];
    }
    for (int i = 0; i < n; i++)
    {
        orange[i] = b + orange[i];
    }
    for (int i = 0; i < m; i++)
    {
        apple[i] = a + apple[i];
    }
    int opp = 0, app = 0;
    for (int i = 0; i < n; i++)
    {
        if (orange[i] >= s && orange[i] <= t)
            opp++;
    }
    for (int i = 0; i < m; i++)
    {
        if (apple[i] >= s && apple[i] <= t)
            app++;
    }
    cout << app << endl
         << opp;
    return 0;
}
