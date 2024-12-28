
// // wap to swaping using call by refrence
// #include <iostream>
// using namespace std;
// void swp(int &a, int &b)
// {
//     a = a + b;
//     b = a - b;
//     a = a - b;
// }
// int main()
// {
//     int a, b;
//     cout << "enter 2 no\n";
//     cin >> a >> b;
//     swap(a,b);
//     cout << "after swap a=" << a << "\n";
//     cout << "after swap b=" << b << "\n";
// }

// wap to find maxmium value of two number using function
//  #include <iostream>
//  using namespace std;
//  int max( int a,int b){
//      if(a>b){
//      return a;
//      }
//      else{
//          return b;
//      }

// }
// int main(){
//     int a,  b;
//     cout<<"enter 2 nu\n";
//     cin>>a>>b;
//     cout<<"max value:"<<max(a,b);

// }

// wap to print the table of any number using function
#include <iostream>
using namespace std;
void table(int a  )
{
    for (int i = 1; i <= 10; i++)
    {
        cout << a * i << "\n";
    }
}
int main()
{
    int a;
    cout << "enter number\n";
    cin >> a;
    for (int i = 1; i <= 10; i++)
    {
        cout << a * i << "\n";
    }
    cout <<a<<"\n";
    table(a);
}