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

int main()
{
    StackOfIntegers stack;

    stack.Push(10);
    stack.Push(20);
    cout << "Top element (Peek): " << stack.Peek() << endl;

    cout << "Stack size: " << stack.GetSize() << endl;

    cout << "Popped element: " << stack.Pop() << endl;
    cout << "Popped element: " << stack.Pop() << endl;

    cout << "Is stack empty: " << (stack.Empty() ? "Yes" : "No") << endl;

    // 空栈上尝试弹出栈顶元素
    cout << "Attempt to Peek on empty stack: " << stack.Peek() << endl;
    cout << "Attempt to Pop on empty stack: " << stack.Pop() << endl;

    stack.Push(30);
    stack.Push(40);
    cout << "Using Peek to view top element: " << stack.Peek() << endl;
    cout << "Top element (ensure it is not popped): " << stack.Peek() << endl;

    // 栈溢出测试
    cout << "Overflow test" << endl;
    for (int i = 0; i < 101; ++i)
    {
        stack.Push(i);
    }

    return 0;
}
