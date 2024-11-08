#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;
typedef long double ld;
const ll mod = 1e9 + 7;

class CArray
{
private:
    int *arr;
    int size;

public:
    CArray() : arr(nullptr), size(0) {}

    CArray(const CArray &other)
    {
        size = other.size;
        arr = new int[size];
        memcpy(arr, other.arr, size * sizeof(int));
    }

    CArray &operator=(const CArray &other)
    {
        if (this == &other)
        {
            return *this;
        }
        delete[] arr;
        size = other.size;
        arr = new int[size];
        memcpy(arr, other.arr, size * sizeof(int));
        return *this;
    }

    void push_back(int value)
    {
        int *newArr = new int[size + 1];
        memcpy(newArr, arr, size * sizeof(int));
        newArr[size] = value;
        delete[] arr;
        arr = newArr;
        size++;
    }

    int length() const
    {
        return size;
    }

    int &operator[](int index)
    {
        return arr[index];
    }

    const int &operator[](int index) const
    {
        return arr[index];
    }

    ~CArray()
    {
        delete[] arr;
    }
};

int main()
{
    CArray a;
    for (int i = 0; i < 5; i++)
    {
        a.push_back(i);
    }
    CArray a2, a3;
    a2 = a;
    for (int i = 0; i < a2.length(); i++)
    {
        cout << a2[i] << " ";
    }
    cout << endl;
    a2 = a3;
    for (int i = 0; i < a3.length(); i++)
    {
        cout << a2[i] << " ";
    }
    cout << endl;
    a[3] = 100;
    CArray a4(a);
    for (int i = 0; i < a4.length(); i++)
    {
        cout << a4[i] << " ";
    }
    cout << endl;
    return 0;
}