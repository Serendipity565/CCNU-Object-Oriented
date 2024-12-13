#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;
typedef long double ld;
const ll mod = 1e9 + 7;

int main()
{
    multiset<int> s;
    set<int> exist;
    int n;
    cin >> n;
    string op;
    for (int i = 0; i < n; i++)
    {
        cin >> op;
        if (op == "add")
        {
            int x;
            cin >> x;
            s.insert(x);
            exist.insert(x);
            cout << s.count(x) << endl;
        }
        else if (op == "del")
        {
            int x;
            cin >> x;
            cout << s.count(x) << endl;
            if (s.count(x) > 0)
            {
                s.erase(x);
            }
        }
        else if (op == "ask")
        {
            int x;
            cin >> x;
            if (exist.find(x) == exist.end())
            {
                cout << 0;
            }
            else
            {
                cout << 1;
            }
            cout << " " << s.count(x) << endl;
        }
    }
}