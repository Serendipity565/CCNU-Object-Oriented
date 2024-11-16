#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;
typedef long double ld;
const ll mod = 1e9 + 7;

class Triangle
{
private:
    ld a, b, c;

public:
    Triangle(ld a, ld b, ld c);
    bool check(ld a, ld b, ld c);
    ld area();
    ld perimeter();
};

Triangle::Triangle(ld a, ld b, ld c)
{
    this->a = a;
    this->b = b;
    this->c = c;
}

ld Triangle::perimeter()
{
    return a + b + c;
}

ld Triangle::area()
{
    ld s = perimeter() / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

bool Triangle::check(ld a, ld b, ld c)
{
    return (a + b > c) && (a + c > b) && (b + c > a);
}

void solve()
{
    ld a, b, c;
    cout << "请输入三角形的三条边长: ";
    cin >> a >> b >> c;

    Triangle triangle(a, b, c);
    if (triangle.check(a, b, c))
    {
        cout << "面积为: " << triangle.area() << endl;
        cout << "边长为: " << triangle.perimeter() << endl;
    }
    else
    {
        cout << "您输入的三条边不能构成三角形" << endl;
    }
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
