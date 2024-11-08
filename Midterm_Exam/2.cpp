#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;
typedef long double ld;
const ll mod = 1e9 + 7;
const double PI = 3.14159265358;

class Shape
{
public:
    double area() const
    {
        return 0;
    }
};

class Rectangle : public Shape
{
private:
    double length;
    double width;

public:
    Rectangle(double l = 0, double w = 0) : length(l), width(w) {}

    double area() const
    {
        return length * width;
    }

    bool operator==(const Rectangle &other) const
    {
        return (length == other.length && width == other.width) ||
               (length == other.width && width == other.length);
    }
};

class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r = 0) : radius(r) {}

    double area() const
    {
        return PI * radius * radius;
    }
};

int main()
{
    Rectangle rect1(4, 5);
    Rectangle rect2(5, 4);
    Rectangle rect3(3, 6);

    cout << "Area of rect1: " << rect1.area() << endl;
    cout << "Area of rect2: " << rect2.area() << endl;
    cout << "Area of rect3: " << rect3.area() << endl;

    if (rect1 == rect2)
    {
        cout << "rect1 is equal to rect2" << endl;
    }
    else
    {
        cout << "rect1 is not equal to rect2" << endl;
    }

    if (rect1 == rect3)
    {
        cout << "rect1 is equal to rect3" << endl;
    }
    else
    {
        cout << "rect1 is not equal to rect3" << endl;
    }

    Circle circle1(3);
    cout << "Area of circle1: " << circle1.area() << endl;

    return 0;
}