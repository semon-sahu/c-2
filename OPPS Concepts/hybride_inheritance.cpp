// hybride_inheritance.cpp
//  defination: combination of difference types of inheritance is called hybride inheritance

// virtual inherit table jab  karte  hai jab hybride inheritance  use hot hai 
#include <iostream>
using namespace std;
class RBI{
    public:void msg(){
            cout << "\nRBI\n";
    }
};
class SBI:virtual public RBI{
    public:void sbi(){
            cout << "\nSBI\n";
            
    }
};
class Axis : virtual public RBI
{
public:
    void axis()
    {
        cout << "\nAxis\n";
        
    }
};
class CUST:public SBI,public Axis{
    public:
        void c()
        {
            cout << "\n coustumer\n";
        }
};
int main(){
    CUST obj;
    obj.sbi();
    obj.axis();
    obj.c();
    obj.msg();

}

