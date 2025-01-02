#include <iostream>
using namespace std;
class SBI
{
public:
    void sbiacnt()
    {
        cout << "SBI MEMORY\n";
    }
    ~SBI()
    {

        cout << "SBI DELETE\n";
    }
};
class Axis
{
public:
    void axisacnt()
    {
        cout << "AXIS MEMORY\n";
    }
    ~Axis()
    {

        cout << "AXIS DELETE\n";
    }
};
class Customer : public SBI, public Axis
{
public:
    void msg()
    {
        cout << "CUSTMOER MEMORY\n";
    }
    ~Customer()
    {

        cout << "CUSTMOER DELETE\n";
    }
};
int main()
{
    Customer ct;
}