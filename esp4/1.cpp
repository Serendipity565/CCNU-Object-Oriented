#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;
typedef long double ld;
const ll mod = 1e9 + 7;

class Rational
{
private:
    int numerator;   // 分子
    int denominator; // 分母

    int gcd(int a, int b) const
    {
        return b == 0 ? a : gcd(b, a % b);
    }

    void reduce()
    {
        int g = gcd(abs(numerator), abs(denominator));
        numerator /= g;
        denominator /= g;
        if (denominator < 0)
        {
            numerator = -numerator;
            denominator = -denominator;
        }
    }

public:
    Rational() : numerator(0), denominator(1) {}

    Rational(int numerator, int denominator) : numerator(numerator), denominator(denominator)
    {
        if (denominator == 0)
        {
            cerr << "Denominator cannot be zero." << endl;
            exit(0);
        }
        reduce();
    }

    ~Rational() {}

    int getNumerator() const
    {
        return numerator;
    }

    int getDenominator() const
    {
        return denominator;
    }

    Rational add(const Rational &secondRational) const
    {
        int num = numerator * secondRational.denominator + secondRational.numerator * denominator;
        int denom = denominator * secondRational.denominator;
        return Rational(num, denom);
    }

    Rational subtract(const Rational &secondRational) const
    {
        int num = numerator * secondRational.denominator - secondRational.numerator * denominator;
        int denom = denominator * secondRational.denominator;
        return Rational(num, denom);
    }

    Rational multiply(const Rational &secondRational) const
    {
        int num = numerator * secondRational.numerator;
        int denom = denominator * secondRational.denominator;
        return Rational(num, denom);
    }

    Rational divide(const Rational &secondRational) const
    {
        if (secondRational.numerator == 0)
        {
            cerr << "Division by zero." << endl;
            exit(0);
        }
        int num = numerator * secondRational.denominator;
        int denom = denominator * secondRational.numerator;
        return Rational(num, denom);
    }

    int compareTo(const Rational &secondRational) const
    {
        Rational diff = subtract(secondRational);
        if (diff.numerator > 0)
        {
            return 1;
        }
        else if (diff.numerator < 0)
        {
            return -1;
        }
        else
        {
            return 0;
        }
    }

    bool equals(const Rational &secondRational) const
    {
        return compareTo(secondRational) == 0;
    }

    int intValue() const
    {
        return numerator / denominator;
    }

    double doubleValue() const
    {
        return static_cast<double>(numerator) / denominator;
    }

    string toString() const
    {
        if (denominator == 1)
        {
            return to_string(numerator);
        }
        else
        {
            return to_string(numerator) + "/" + to_string(denominator);
        }
    }

    Rational operator+(Rational &other)
    {
        return add(other);
    }

    Rational operator-(Rational &other)
    {
        return subtract(other);
    }

    Rational operator*(Rational &other)
    {
        return multiply(other);
    }

    Rational operator/(const Rational &other) const
    {
        return divide(other);
    }

    Rational &operator+=(const Rational &other)
    {
        return *this = add(other);
    }

    Rational &operator-=(const Rational &other)
    {
        return *this = subtract(other);
    }

    Rational &operator*=(const Rational &other)
    {
        return *this = multiply(other);
    }

    Rational &operator/=(const Rational &other)
    {
        return *this = divide(other);
    }

    int operator[](int index) const
    {
        if (index == 0)
        {
            return numerator;
        }
        else if (index == 1)
        {
            return denominator;
        }
        else
        {
            cerr << "Index out of range" << endl;
            exit(0);
        }
    }

    // 前置+
    Rational &operator++()
    {
        numerator += denominator;
        return *this;
    }
    // 后置+
    Rational operator++(int)
    {
        Rational temp = *this;
        numerator += denominator;
        return temp;
    }

    Rational &operator--()
    {
        numerator -= denominator;
        return *this;
    }

    Rational operator--(int)
    {
        Rational temp = *this;
        numerator -= denominator;
        return temp;
    }

    bool operator<=(const Rational &other) const
    {
        return compareTo(other) != 1;
    }

    bool operator<(const Rational &other) const
    {
        return compareTo(other) == -1;
    }

    bool operator>=(const Rational &other) const
    {
        return compareTo(other) != -1;
    }

    bool operator>(const Rational &other) const
    {
        return compareTo(other) == 1;
    }

    bool operator==(const Rational &other) const
    {
        return compareTo(other) == 0;
    }

    bool operator!=(const Rational &other) const
    {
        return compareTo(other) != 0;
    }
};

int main()
{
    Rational r0(4, 2);
    cout << "r0 =" << r0.toString() << endl;

    Rational r1(2, 4);
    cout << "r1 =" << r1.toString() << endl;

    Rational r2(3, 5);
    cout << "r2 =" << r2.toString() << endl;

    Rational r3 = r1 + r2;
    cout << "r1 + r2 = " << r3.toString() << endl;

    Rational r4 = r1 - r2;
    cout << "r1 - r2 = " << r4.toString() << endl;

    Rational r5 = r1 * r2;
    cout << "r1 * r2 = " << r5.toString() << endl;

    Rational r6 = r1 / r2;
    cout << "r1 / r2 = " << r6.toString() << endl;

    r1 += r2;
    cout << "r1 += r2: " << r1.toString() << endl;

    r1 -= r2;
    cout << "r1 -= r2: " << r1.toString() << endl;

    ++r1;
    cout << "++r1: " << r1.toString() << endl;
    r1++;
    cout << "r1++: " << r1++.toString() << endl;

    --r1;
    cout << "--r1: " << r1.toString() << endl;
    r1--;
    cout << "r1--: " << r1.toString() << endl;

    cout << "r1 <= r2: " << (r1 <= r2) << endl;
    cout << "r1 >= r2: " << (r1 >= r2) << endl;
    cout << "r1 == r2: " << (r1 == r2) << endl;
    cout << "r1 != r2: " << (r1 != r2) << endl;

    cout << "r1 =" << r1.toString() << endl;
    cout << "Integer part of r1: " << r1.intValue() << endl;
    cout << "Integer part of r2: " << r2.intValue() << endl;

    cout << "Floating value of r1: " << r1.doubleValue() << endl;
    cout << "Floating value of r2: " << r2.doubleValue() << endl;

    cout << "Numerator of r1: " << r1[0] << endl;
    cout << "Denominator of r1: " << r1[1] << endl;

    return 0;
}
