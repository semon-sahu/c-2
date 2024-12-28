//defenation
//operator overloading is used to redefine the nature of operator for no primitive data types.
//there are 2 types of operator overloading 
//1. unary operator overloading
//2. binary operator overloading
#include<iostream>
using namespace std;
class top{
    int a=10;
    public:int operator ++()//unary operator overloading
    {
        a++;
        cout<<a<<"\n";
    }

public:int operator--() // unary operator overloading
    {
        a--;
        cout<<a<<"\n";
    }
};
int main(){
    top p;
    ++p;
    --p;
    int a=90;
    cout<<"\n";
    cout<<++a;
    
}
    