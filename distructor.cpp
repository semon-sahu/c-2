//opps consept imp question 

#include<iostream>
using namespace std;
class dp{
    public :dp(){
        cout<<"memmory allocation\n";

    }
    ~dp(){
        cout<<"memory Released\n";
    }
    void show()
    {
        cout << "\nWelcome\n";
    }
};
int main(){
    dp d1;
    d1.show();

}
