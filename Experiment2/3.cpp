#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;
typedef long double ld;
const ll mod = 1e9 + 7;
const double PI = 3.1415926;

class Circle
{
private:
    double radius;

public:
    Circle()
    {
        this->radius = 0;
    }

    Circle(double r)
    {
        this->radius = r;
    }

    double area()
    {
        return PI * radius * radius;
    }
};

double sum(Circle circleArray[], int size)
{
    double totalArea = 0.0;
    for (int i = 0; i < size; ++i)
    {
        totalArea += circleArray[i].area();
    }
    return totalArea;
}

void solve()
{
    int n;
    cout << "请输入圆的个数: ";
    cin >> n;

    Circle *circles = new Circle[n];

    for (int i = 0; i < n; ++i)
    {
        double radius;
        cout << "请输入第 " << (i + 1) << " 个圆的边长: ";
        cin >> radius;
        circles[i] = Circle(radius);
    }

    double totalArea = sum(circles, n);
    cout << "所有圆的总面积为: " << totalArea << endl;

    delete[] circles;
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
