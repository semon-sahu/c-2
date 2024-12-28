//function calling itself is call recurtion
//there are two  types of recutrion
// 1.head recurtion
// 2.tail recurtion
// in a recurtion there are two types of condition
//1. basecondition
//2. recurtion relatipnship


#include<iostream>
using namespace std;
// void cybrom(int a){
//     if(a<1){
//         return;

//     }
//     // cout<<a<<"\t";//head recurtion
//     cybrom(a-1);
//   // cout << a << "\t"; // tail recurtion 
// }
// int main(){
//     cybrom(5);
// }



//wap  to print a table using recurtion

// void table(int a,int i){
//     if(i>10){
//         return;

//     }
//     cout<<a*i<<"\t";
//     table(a,i+1);
// }

// int main(){
// int x;
// cout<<"enter no for table:";
// cin>>x;
// table(x,1);
// }

//wap for fectorial using recurtion

int fact(int a){
    if (a==0){
        return 1;

    }
    return(a*fact(a-1));

}
int main(){
    int a;
    cout<<"enter any no for factorial\n";
    cin>>a;
    cout<<fact(a);
    
}