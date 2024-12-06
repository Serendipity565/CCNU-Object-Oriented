#include <bits/stdc++.h>

using namespace std;

template <typename T>
class Stack
{
private:
    T elem[100];
    int size;

public:
    Stack()
    {
        size = -1;
    }
    bool Empty()
    {
        return size == -1;
    }

    T Peek()
    {
        if (size == -1)
        {
            cout << "error: Stack is empty" << endl;
            return -1;
        }
        return elem[size];
    }

    void Push(T val)
    {
        if (size >= 99)
        {
            cout << "error: Stack overflow" << endl;
            return;
        }
        elem[++size] = val;
    }

    T Pop()
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

int main()
{
    Stack<int> s1;
    s1.Push(10);
    s1.Push(20);
    s1.Push(30);

    cout << "Top element of s1 (Peek):" << s1.Peek() << endl;
    s1.Pop();
    cout << "Top element of s1 (Peek):" << s1.Peek() << endl;
    cout << "Size of s1:" << s1.GetSize() << endl;

    Stack<double> s2;
    s2.Push(1.1);
    s2.Push(2.2);
    s2.Push(3.3);

    cout << "Top element of s1 (Peek):" << s2.Peek() << endl;
    s2.Pop();
    cout << "Top element of s1 (Peek):" << s2.Peek() << endl;
    cout << "Size of s2:" << s2.GetSize() << endl;

    return 0;
}