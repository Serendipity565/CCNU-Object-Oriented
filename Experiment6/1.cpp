#include <iostream>
#include <string>
using namespace std;

template <typename T, typename Pred>
T *F(T *first, T *last, T *result, Pred pred)
{
    while (first != last)
    {
        if (pred(*first))
        {
            *result = *first;
            ++result;
        }
        ++first;
    }
    return result;
}

bool Larger2(int n)
{
    return n > 2;
}

bool Longer3(string s)
{
    return s.length() > 3;
}

int main()
{
    string as1[5] = {"Tom", "Mike", "Jack", "Ted", "Lucy"};
    string as2[5];

    int a1[5] = {1, 2, 3, 4, 5};
    int a2[5];

    string *p = F(as1, as1 + 5, as2, Longer3);
    for (int i = 0; i < p - as2; ++i)
    {
        cout << as2[i];
    }
    cout << endl;

    int *p2 = F(a1, a1 + 5, a2, Larger2);
    for (int i = 0; i < p2 - a2; ++i)
    {
        cout << a2[i] << ",";
    }
    cout << endl;

    return 0;
}
