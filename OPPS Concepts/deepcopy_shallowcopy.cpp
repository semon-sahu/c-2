// deepcopy_shallowcopy.cpp

#include<iostream>
using namespace std;
class student{
    int rno;
    public:student(int rno){
        this->rno=rno;//this pointer

    }
    void show(){
        cout<<"Rno="<<rno;
    }
};
int main(){
    student s1(101);
    s1.show();
    student s2(s1);//shallow copy
    s2.show();


}