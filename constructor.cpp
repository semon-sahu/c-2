// constructor:-
// 1. Default
// 2.parameterised
// 3.copy constructor
// .shallow copy 
// .deep copy


// .its called a special  type function
// .constructor is used to  elocate  the memory of an object
// .constructor doesent have any retuen type
// .by default the class having a constructor which is belongs to public specifier 




// default connstructor syntex
// #include<iostream>
// using namespace std;

// class top{
//     public:top(){
//             cout << "cybrom";

//     }
//     public:void  show(){
//         cout<<"\nhello";


//     }
// };
// int  main(){
//     top t1;
// }


// class name(){
//     //body
// }
// parameterised constructor syntex
// class name(data type ,variable name){
//     //body
// }
// copy constructor syntex
// class name(class name &obj){
//     //body
// }
// shallow copy syntex
// class name(class name &obj){
//     //body
// }
// deep copy syntex




//parameterised constructor
// .in a parameterised constructor we use parameter in a function
#include <iostream>
    using namespace std;
class ATM
{
    public:ATM(int u,int p){
        if(u==1111 && p==2024){
            cout<<"\n wlecome\n";

        }
        else{
            cout<<"\ninvalid user\n";

        }
    }
};
int main(){
    int acno,pwd;
    cout<<"enter acon\n";
    cin>>acno;
    cout<<"enter pwd\n";
    cin>>pwd;
    ATM obj(acno,pwd);
}