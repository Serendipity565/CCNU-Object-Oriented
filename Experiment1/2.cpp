#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;
typedef long double ld;
const ll mod = 1e9 + 7;

void debug()
{
    return;
}

void solve()
{
    cout << "请输入两个数和操作符:";
    ll a, b;
    char op;
    cin >> a >> b >> op;
    if (op == '+')
    {
        cout << a << op << b << "=" << a + b << endl;
    }
    else if (op == '-')
    {
        cout << a << op << b << "=" << a - b << endl;
    }
    else if (op == '*')
    {
        cout << a << op << b << "=" << a * b << endl;
    }
    else if (op == '/')
    {
        cout << a << op << b << "=" << (double)a / (double)b << endl;
    }
    return;
}

int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    // cout.tie(0);

    int t;
    t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}