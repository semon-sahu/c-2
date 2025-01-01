#include <iostream>
using namespace std;
class RBI
{
    int t;

public:
    void msg()
    {
        cout << "\nRBI CLASS";
    }
};
class SBI : public RBI
{
    int a;

public:
    void show()
    {
        cout << "\nSBI CLASS";
    }
};
class CUST : public SBI
{
    int a;

public:
    void acnt()
    {
        cout << "\nCUST CLASS\n ";
    }
};

int main()
{
    CUST s;
    s.show();
    s.msg();
    s.acnt();
    cout << "size of sbi=" << sizeof(s);
}