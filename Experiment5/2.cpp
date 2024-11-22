#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;
typedef long double ld;
const ll mod = 1e9 + 7;

class Employee
{
private:
    char *m_name;
    char *m_no;

public:
    Employee(char *name, char *no)
    {
        cout << "Employee类的构造函数调用!" << endl;
        m_name = new char[strlen(name) + 1];
        strcpy(m_name, name);

        m_no = new char[strlen(no) + 1];
        strcpy(m_no, no);
    }

    virtual void display()
    {
        cout << "姓名:" << m_name << endl;
        cout << "员工编号:" << m_no << endl;
    }

    virtual ~Employee()
    {
        cout << "Employee类的析构函数调用!" << endl;
        delete[] m_no;
        delete[] m_name;
    }
};

class Leader : public Employee
{
private:
    char *m_posdes;

public:
    Leader(char *name, char *no, char *posdes) : Employee(name, no)
    {
        cout << "Leader类的构造函数调用!" << endl;
        m_posdes = new char[strlen(posdes) + 1];
        strcpy(m_posdes, posdes);
    }

    void display()
    {
        Employee::display();
        cout << "职位描述:" << m_posdes << endl;
    }

    ~Leader()
    {
        cout << "Leader类的析构函数调用!" << endl;
        delete[] m_posdes;
    }
};

int main()
{
    Employee *pe = new Leader("张三", "0001", "部门经理");
    pe->display();
    delete pe;
    return 0;
}
