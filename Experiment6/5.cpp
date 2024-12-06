#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s1)
{
    string s2 = s1;
    reverse(s2.begin(), s2.end());
    return s1 == s2;
}

int main()
{
    string s;
    cout << "enter a string:";
    cin >> s;
    if (isPalindrome(s))
    {
        cout << s << " is a palindrome" << endl;
    }
    else
    {
        cout << s << " is not a palindrome" << endl;
    }
    return 0;
}