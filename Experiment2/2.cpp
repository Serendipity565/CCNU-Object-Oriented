#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;
typedef long double ld;
const ll mod = 1e9 + 7;

class Point
{
private:
    double x, y;

public:
    Point(double x, double y)
    {
        this->x = x;
        this->y = y;
    }

    double distance(const Point &p)
    {
        return sqrt((x - p.x) * (x - p.x) + (y - p.y) * (y - p.y));
    }
};

void solve()
{
    double x1, y1, x2, y2;
    cout << "请输入第一个点的坐标 (x1 y1): ";
    cin >> x1 >> y1;
    cout << "请输入第二个点的坐标 (x2 y2): ";
    cin >> x2 >> y2;

    Point p1(x1, y1);
    Point p2(x2, y2);
    cout << "两个点间的距离为: " << p1.distance(p2) << endl;
}

int main()
{
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}
