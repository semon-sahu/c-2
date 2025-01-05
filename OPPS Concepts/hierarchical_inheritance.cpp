// hierarchical_inheritance.cpp 
// #include <iostream>
// using namespace std;
// class collage{
//     protected:void show(){
//         cout<<"collage\n";
//     }
// };
// class student:public collage{
//     public:void msg(){
//         cout<<"student\n";
//         show();
//     }
// };
// int main(){
//     student s;
//     s.msg();
// }

//sbi ,axis ,pnb=rbi
#include <iostream>
using namespace std;
class RBI{
    protected:void show(){
            cout << "\nRBI\n";
    }
};
class SBI:public RBI{
    public:void sbi(){
            cout << "\nSBI\n";
            show();
    }
};
class Axis:public RBI{
    public:void axis(){
            cout << "\nAxis\n";
            show();
    }
};
class PNB:public RBI{
    public:void pnb(){
            cout << "\nPNB\n";
            show();
    }
};
int main(){
    SBI s;
    s.sbi();
    Axis a;
    a.axis();
    PNB p;
    p.pnb();
}
