#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;
typedef long double ld;
const ll mod = 1e9 + 7;

int a[4][4] = {0};
int b[4][4] = {0};

void debug()
{
    return;
}

void change(int a[4][4], int b[4][4])
{
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            b[j][3 - i + 1] = a[i][j];
        }
    }
}

void solve()
{
    cout << "请输入第一个矩阵:\n";
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cin >> a[i][j];
        }
    }

    change(a, b);

    cout << "转换后的结果:\n";
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
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
