#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;
typedef long double ld;
const ll mod = 1e9 + 7;

struct Point
{
    int x, y;
};

struct Rule1
{
    bool operator()(int a, int b)
    {
        if (a % 10 == b % 10)
        {
            return a > b;
        }
        return a % 10 < b % 10;
    }
};

struct Rule2
{
    bool operator()(Point a, Point b)
    {
        if (a.x * a.x + a.y * a.y == b.x * b.x + b.y * b.y)
        {
            if (a.x == b.x)
            {
                return a.y < b.y;
            }
            return a.x < b.x;
        }
        return a.x * a.x + a.y * a.y < b.x * b.x + b.y * b.y;
    }
};

int main()
{
    int a[8] = {6, 5, 55, 23, 3, 9, 87, 10};
    sort(a, a + 8, Rule1());
    for (int i = 0; i < 8; i++)
    {
        cout << a[i] << ",";
    }
    cout << endl;
    Point ps[8] = {{1, 0}, {0, 1}, {0, -1}, {-1, 0}, {1, -1}, {1, 1}, {2, 0}, {-2, 0}};
    sort(ps, ps + 8, Rule2());
    for (int i = 0; i < 8; i++)
    {
        cout << "(" << ps[i].x << "," << ps[i].y << "),";
    }
    return 0;
}