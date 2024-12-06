#include <bits/stdc++.h>
using namespace std;

string commonChars(const string &s1, const string &s2)
{
    set<char> s;
    string res = "";
    for (int i = 0; i < s1.size(); i++)
    {
        for (int j = 0; j < s2.size(); j++)
        {
            if (s1[i] == s2[j])
            {
                s.insert(s1[i]);
                break;
            }
        }
    }
    for (auto c : s)
    {
        res += c;
    }
    return res;
}

int main()
{
    string s1;
    cout << "enter a string s1:";
    cin >> s1;
    string s2;
    cout << "enter a string s2:";
    cin >> s2;
    cout << "common chars:" << commonChars(s1, s2) << endl;
    return 0;
}