#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, list<int>> mp;
    int n;
    cin >> n;
    int x, y;
    for (int i = 0; i < n; ++i)
    {
        string op;
        cin >> op;
        if (op == "new")
        {
            cin >> x;
            mp[x] = list<int>();
        }
        else if (op == "add")
        {
            cin >> x >> y;
            mp[x].push_back(y);
        }
        else if (op == "merge")
        {
            cin >> x >> y;
            mp[x].merge(mp[y]);
            mp[y].clear();
        }
        else if (op == "unique")
        {
            cin >> x;
            set<int> s;
            for (auto j : mp[x])
            {
                s.insert(j);
            }
            mp[x] = list<int>(s.begin(), s.end());
        }
        else if (op == "out")
        {
            cin >> x;
            for (auto j : mp[x])
            {
                cout << j << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "Typing error,Please enter again" << endl;
            n++;
        }
    }
}
