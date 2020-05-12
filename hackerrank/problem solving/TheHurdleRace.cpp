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
    int n;
    int k;
    cin >> n >> k;
    vector<int> height(n);
    for (int height_i = 0; height_i < n; height_i++)
    {
        cin >> height[height_i];
    }
    sort(height.begin(), height.end());
    if (height[n - 1] > k)
        cout << height[n - 1] - k;
    else
        cout << "0";
    // your code goes here
    return 0;
}
