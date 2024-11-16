#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;
typedef long double ld;
const ll mod = 1e9 + 7;

void debug(int a[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return;
}

int binarySearch(int list[], int key, int arrSize)
{
    int l = 0;
    int r = arrSize - 1;

    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (list[mid] == key)
        {
            return mid;
        }
        else if (list[mid] < key)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return -1;
}

void solve()
{
    int len;
    cout << "请输入数组大小(以空格分隔):";
    cin >> len;
    int a[len + 3];
    for (int i = 0; i < len; i++)
    {
        cin >> a[i];
    }
    sort(a, a + len);

    // debug(a, len);
    int k;
    cout << "请输入想查找的数:";
    cin >> k;
    int result = binarySearch(a, k, len);
    if (result != -1)
    {
        cout << "找到 " << k << " 在位置: " << result + 1 << endl;
    }
    else
    {
        cout << "没有找到 " << k << endl;
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