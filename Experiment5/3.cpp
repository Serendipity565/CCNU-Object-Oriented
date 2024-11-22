#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;
typedef long double ld;
const ll mod = 1e9 + 7;

template <typename T>
bool isSorted(const vector<T> &a)
{
    bool flag1 = true;
    bool flag2 = true;

    for (int i = 1; i < a.size(); i++) // 是否正序
    {
        if (a[i] < a[i - 1])
        {
            flag1 = false;
        }
    }

    for (int i = 1; i < a.size(); i++) // 是否倒序
    {
        if (a[i] > a[i - 1])
        {
            flag2 = false;
        }
    }

    return (flag1 || flag2);
}

int main()
{
    vector<int> a1 = {1, 2, 3, 4, 5};
    if (isSorted(a1))
    {
        cout << "int 数组已排序" << endl;
    }
    else
    {
        cout << "int 数组未排序" << endl;
    }

    vector<int> a2 = {1, 3, 2, 4, 5};
    if (isSorted(a2))
    {
        cout << "int 数组已排序" << endl;
    }
    else
    {
        cout << "int 数组未排序" << endl;
    }

    vector<double> a3 = {1.1, 2.2, 3.3, 4.4, 5.5};
    if (isSorted(a3))
    {
        cout << "double 数组已排序" << endl;
    }
    else
    {
        cout << "double 数组未排序" << endl;
    }

    return 0;
}
