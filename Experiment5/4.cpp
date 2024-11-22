#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;
typedef long double ld;
const ll mod = 1e9 + 7;

template <typename T>
T ArraySum(T *a, T *b)
{
    T ans;
    for (auto p = a; p != b; p++)
    {
        ans += *p;
    }
    return ans;
}

int main()
{
    string array[4] = {"Tomy", "Jacy", "Mary", "John"};
    cout << ArraySum(array, array + 4) << endl;
    int a[4] = {1, 2, 3, 4};
    cout << ArraySum(a, a + 4) << endl;
    return 0;
}
