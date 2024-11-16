#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;
typedef long double ld;
const ll mod = 1e9 + 7;

class MyInteger
{
private:
    int value;

public:
    MyInteger(int val)
    {
        this->value = val;
    }

    int GetValue()
    {
        return value;
    }

    bool IsEven()
    {
        return value % 2 == 0;
    }

    bool IsPrime()
    {
        if (value <= 1)
        {
            return false;
        }
        for (int i = 2; i <= sqrt(value); ++i)
        {
            if (value % i == 0)
            {
                return false;
            }
        }
        return true;
    }

    bool Equals(int val)
    {
        return value == val;
    }

    bool Equals(const MyInteger &A)
    {
        return value == A.value;
    }
};

int main()
{
    MyInteger MyInt(7);
    cout << "MyInt Value: " << MyInt.GetValue() << endl;
    cout << "Is 7 even? " << (MyInt.IsEven() ? "Yes" : "No") << endl;
    cout << "Is 7 prime? " << (MyInt.IsPrime() ? "Yes" : "No") << endl;
    cout << "Is MyInt equal to 7? " << (MyInt.Equals(7) ? "Yes" : "No") << endl;
    cout << "Is MyInt equal to 8? " << (MyInt.Equals(8) ? "Yes" : "No") << endl;
    MyInteger AnotherInt(7);
    cout << "AnotherInt Value: " << AnotherInt.GetValue() << endl;
    cout << "Is MyInt equal to AnotherInt? " << (MyInt.Equals(AnotherInt) ? "Yes" : "No") << endl;
    MyInteger DifferentInt(10);
    cout << "DifferentInt Value: " << DifferentInt.GetValue() << endl;
    cout << "Is MyInt equal to DifferentInt? " << (MyInt.Equals(DifferentInt) ? "Yes" : "No") << endl;
    return 0;
}