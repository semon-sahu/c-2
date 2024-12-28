#include<iostream>
using namespace std;
class top{
    int a=10,b=90;
    public :void sum()//function over loading
    {
        cout<<a+b<<"\n";

    }
    void sum(int k,int p,int l)//function overlloadinh
    {
        cout<<k+p+l<<"\n";

    }

};
int main(){
    top f;
    f.sum();
    f.sum(2,3,4);
}