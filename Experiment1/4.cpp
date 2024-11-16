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
    string c[] = {"石头", "剪刀", "布"};

    srand(static_cast<unsigned int>(time(0)));
    int b = rand() % 3 + 1; // 电脑的选择，1代表石头，2代表剪刀，3代表布

    int a;
    cout << "请输入编号(1.石头, 2.剪刀, 3.布): ";
    cin >> a;

    cout << "你出的是: " << c[b - 1] << "," << "电脑出的是: " << c[b - 1] << endl;

    if (a < 1 || a > 3)
    {
        cout << "输入不和法" << endl;
        return;
    }
    // 判断胜负
    if (a == b)
    {
        cout << "平局!" << endl;
    }
    else if ((a == 1 && b == 2) ||
             (a == 2 && b == 3) ||
             (a == 3 && b == 1))
    {
        cout << "你赢了!" << endl;
    }
    else
    {
        cout << "你输了!" << endl;
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
    cout << "你想玩几轮:";
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
