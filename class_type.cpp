//compostie class 
// composite class having an  object of previous class and we call the fnction of previous class inside the member function of composite class
#include<iostream>
using namespace std;
class virus{
    public:void affect(){
        cout<<"ur system got hacked\n";

    }


} ;
class Reward//components
{
    virus v;
    public:void Prize(){
        cout<<"u won $20,0000\n";
        v.affect();

    }
};
int main(){
    Reward r;
    r.Prize();

}