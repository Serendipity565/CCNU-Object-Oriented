#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;
typedef long double ld;
const ll mod = 1e9 + 7;

class A
{
private:
    int nVal;

public:
    void Fun()
    {
        cout << "A::Fun" << endl;
    }
    void Do()
    {
        cout << "A::Do" << endl;
    }
};

class B : public A
{
public:
    virtual void Do()
    {
        cout << "B::Do" << endl;
    }
};

class C : public B
{
public:
    void Do()
    {
        cout << "C::Do" << endl;
    }
    void Fun()
    {
        cout << "C::Fun" << endl;
    }
};

void Call(B &p)
{
    p.Fun();
    p.Do();
}

int main()
{
    C c;
    Call(c);
    return 0;
}