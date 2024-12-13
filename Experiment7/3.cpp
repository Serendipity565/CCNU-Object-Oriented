#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;
typedef long double ld;
const ll mod = 1e9 + 7;

int main()
{
    // words.txt 存储单词
    ifstream inputFile("words.txt");
    if (inputFile.is_open())
    {
        map<string, int> mp;
        string word;
        while (inputFile >> word)
        {
            mp[word]++;
        }
        inputFile.close();
        vector<pair<string, int>> ve(mp.begin(), mp.end());
        sort(ve.begin(), ve.end(), [](const pair<string, int> &a, const pair<string, int> &b)
             {  
                if (a.second == b.second)
                {
                    return a.first < b.first;
                }
                return a.second > b.second; });
        for (auto &i : ve)
        {
            cout << i.first << " " << i.second << endl;
        }
    }
    else
    {
        cerr << "Failed to open file." << endl;
        return 0;
    }
}