// // poly Morphism-
// early binding:-(early binding)
// 1.fuction overloading
// 2.operator overloading
// 3.normal object
// 4.multiple function

// run time:-(late binding)
// 1.function overloading
// 2.virtual over loading & ppure virtual function

// 3.super class
// 4.abstract class
// 5.pointer class
// 6.pointer class & normal object

#include <iostream>
using namespace std;
class RBI
{
public:
    virtual void loan()
    {
        cout << "\n RBI class";
    }
    virtual void show()
    {
        cout << "RBI bank";
    }
};
class AXIS : public RBI
{
public:
    void loan()
    {
        cout << "\n AXIS class";
    }
    void show()
    {
        cout << "axis bank";
    }
};
class SBI : public RBI
{
public:
    void loan()
    {
        cout << "n SBI class";
    }
};
int main()
{
    RBI *p;
    AXIS a;
    SBI s;
    p = &a;
    p->loan();
    p->show();
}