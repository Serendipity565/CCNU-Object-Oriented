#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;
typedef long double ld;
const ll mod = 1e9 + 7;

class StackOfIntegers
{
private:
    int elem[100];
    int size;

public:
    StackOfIntegers()
    {
        size = -1;
    }
    bool Empty()
    {
        return size == -1;
    }

    int Peek()
    {
        if (size == -1)
        {
            cout << "error: Stack is empty" << endl;
            return -1;
        }
        return elem[size];
    }

    void Push(int val)
    {
        if (size >= 99)
        {
            cout << "error: Stack overflow" << endl;
            return;
        }
        elem[++size] = val;
    }

    int Pop()
    {
        if (size == -1)
        {
            cout << "error: Stack is empty" << endl;
            return -1;
        }
        return elem[size--];
    }

    int GetSize()
    {
        return size + 1;
    }
};

void DisplayFactorsInDecreasingOrder(int num)
{
    StackOfIntegers stack;

    // 分解最小因子并压入栈中
    for (int i = 2; i <= num; ++i)
    {
        while (num % i == 0)
        {
            stack.Push(i);
            num /= i;
        }
    }

    while (!stack.Empty())
    {
        cout << stack.Pop() << " ";
    }
    cout << endl;
}

int main()
{
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    if (num <= 0)
    {
        cout << "Please enter a positive integer." << endl;
        return -1;
    }

    cout << "The smallest factors in decreasing order are: ";
    DisplayFactorsInDecreasingOrder(num);

    return 0;
}