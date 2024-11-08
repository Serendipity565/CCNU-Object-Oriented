#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;
typedef long double ld;
const ll mod = 1e9 + 7;

class Point
{
private:
    int x, y;

public:
    Point(int x = 0, int y = 0) : x(x), y(y) {}
    friend class Line;
};

class Line
{
private:
    Point sp;
    Point ep;

public:
    Line(const Point &p1, const Point &p2) : sp(p1), ep(p2) {}

    double len() const
    {
        return sqrt(pow(ep.x - sp.x, 2) + pow(ep.y - sp.y, 2));
    }
};

int main()
{
    Point p1(1, 1), p2(5, 6);
    Line li(p1, p2);
    cout << "Line len: " << li.len() << endl;
    return 0;
}