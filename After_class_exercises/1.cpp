#include <bits/stdc++.h>
using namespace std;

const double PI = 3.1415926;

class Shape
{
protected:
    double area;
    string type;

public:
    virtual void SetArea() = 0;
    virtual void SetType() = 0;
    virtual double getArea()
    {
        return area;
    }
    virtual string getType()
    {
        return type;
    }
};

class Triangle : public Shape
{
private:
    int a;
    int b;
    int c;

public:
    Triangle(int a = 0, int b = 0, int c = 0) : a(a), b(b), c(c)
    {
        SetType();
        SetArea();
    }
    virtual void SetArea()
    {
        double p = (a + b + c) / 2;
        area = sqrt(p * (p - a) * (p - b) * (p - c));
    }
    virtual void SetType()
    {
        type = "Triangle";
    }
    virtual double getArea()
    {
        return area;
    }
    virtual string getType()
    {
        return type;
    }
};

class Circle : public Shape
{
private:
    int r;

public:
    Circle(int r = 0) : r(r)
    {
        SetType();
        SetArea();
    }
    virtual void SetArea()
    {
        area = PI * r * r;
    }
    virtual void SetType()
    {
        type = "Circle";
    }
    virtual double getArea()
    {
        return area;
    }
    virtual string getType()
    {
        return type;
    }
};

class Rectangle : public Shape
{
private:
    int l;
    int w;

public:
    Rectangle(int l = 0, int w = 0) : l(l), w(w)
    {
        SetType();
        SetArea();
    }
    virtual void SetArea()
    {
        area = l * w;
    }
    virtual void SetType()
    {
        type = "Rectangle";
    }
    virtual double getArea()
    {
        return area;
    }
    virtual string getType()
    {
        return type;
    }
};

int main()
{
    vector<Shape *> shapes = {
        new Triangle(3, 4, 5),
        new Circle(9),
        new Rectangle(3, 5),
    };

    sort(shapes.begin(), shapes.end(), [](Shape *a, Shape *b)
         { return a->getArea() < b->getArea(); });

    for (Shape *shape : shapes)
    {
        cout << shape->getType() << " Area: " << shape->getArea() << endl;
    }

    for (Shape *shape : shapes)
    {
        delete shape;
    }

    return 0;
}