// polymorfizm.cpp
#include <iostream>
using namespace std;
class animal{
    public:virtual void sound()=0;
};
class Cat:public animal{
    public:void sound(){
        cout<<"Meow Meow"<<endl;
    }
};
class Dog:public animal{
    public:void sound(){
        cout<<"Bark Bark"<<endl;
    }
};
class Lion:public animal{
    public:void sound(){
        cout<<"Roar Roar"<<endl;
    }
};
int main(){
    animal *p;
    Cat c;
    Dog d;
    Lion l;
    p=&c;
    p->sound();
    
    
}