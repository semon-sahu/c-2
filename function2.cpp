// #include <iostream>
// using namespace std;
// // no return function
// // 1. withut parameter & mp returmm finction
// // syntex:

// // oud  functionnmae(){
// // statemenet /code}
// void fun()
// {
//     cout << "this  is a function" << "\t";
// }
// int main()
// // explicit call function  ko call kare ke bulana padta haai
// // implicit call function  ko bina call kare aajata hai  !!
// {
//     for (int i = 1; i < 10; i++)
//     {
//         fun();
//     }
// }

// #include <iostream>
// using namespace std;
// int c;
// void sum(int a,int b)//with parameter and no  return
// {
//     c=a+b;

// }
// void show()//without parameter and no return
// {
//     cout<<c;
// }

// int main()

// {
//     int w,p;
//     cout<<"enter 2 no \n";
//     cin>>w>>p;
//     sum(w,p);
//     show();
//     }

// return type function
// without parameter and  return value

// #include<iostream>
// using namespace std;
// int roi(){
//     return 3;

// }
// int balance (int pwd){
//     if(pwd==203){
//         return 10000;
//     }
//     else{
//         return -1;
//     }
// }
// int main()
// {
//     cout<<balance(203);
// }

// wap to find the profit in petrol
// #include <iostream>
// using namespace std;
// int dealer(int l){
//     return 90*l;
// }
// int main(){
//     int ltr;
//     cout<<"enter pertrol in leter:";
//     cin>>ltr;
//     cout << "amount you have pay:" <<dealer(ltr)+(5*ltr);
// }

// interview question practice 30-11-2024

// 1.parameter & argument...done
// 2.actual parameter&  formal parameter...done
// 3.(int a,int b)&(int,int)
// 4.function pointer
// 5.array as a argumnet in a function
// 6.does function return multiple value or not
// 7.call by refrence  & call by value...done

// #include <iostream>
// using namespace std;
// void swap(int a,int b){//formal parameter //parameter//call by refrence use to save more memory as compare to call by value
//     int c;
//     c=a;
//     a=b;
//     b=c;
//     cout<<"after swap  value of a="<<a<<"\n";
//     cout<<"after swap  value of b="<<b<<"\n";

// }
// int main()
// { // actual parameter//argument
//     int a,b;
//     cout<<"enter  2 value\n ";
//     cin>>a>>b;
//     swap(a,b);//a=9,b=90//call by value
//     cout << "after swap  value of a=" << a << "\n";
//     cout << "after swap  value of b=" << b << "\n";
// }

// 5.array as a argumnet in a function
// #include <iostream>
// using namespace std;
// void fun(int arr[], int l)
// {
//     for (int i = 0; i < l; i++)
//     {
//         cout << arr[i]+10<<"\n";
//     }
   
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     int s = sizeof(arr) / sizeof(arr[0]);
//     fun(arr, s);
//     cout<<"\n after function calling";
//     for (int i = 0; i < s; i++)
//     {
//         cout << arr[i] << "\n";
//     }
// }

#include <iostream>
using namespace std;
int main(){
    int a=20;
    int &b=a;  //& b is a referaance variable  is operator ko use karne se value kahi bhi change karo value dono me vhange hogi
    b=90;
    a=900;
    cout<<"a="<<a<<"\n";
    cout<<"b="<<b<<"\n";
}