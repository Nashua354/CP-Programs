#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    double x, x1, x2, k;
    int y, z, n;
    cin >> x >> y >> z;
    x1 = ((double)y / 100);
    x2 = ((double)z / 100);
    k = x + x * x1 + x * x2;
    if ((k - 0.5) > (int)k)
    {
        n = k;
        n++;
    }
    else
    {
        n = k;
    }
    cout << "The total meal cost is " << n << " dollars.";
    return 0;
}
