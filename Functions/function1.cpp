// function is use   to perform any task is a collection of data mamber and statement or code

// advantage of functiion
// 1.resuable
// 2.memmory saveing and time saveing

// types of function
// pre define funtion /                    user define function-
// 1.maths                               . non return           .return
// 2string                           .with parameter        .without parameter
// 3.time

// #include <iostream>
// #include <string.h>
// using namespace std;
// int main()
// {
//     char name[10];
//     char surname[20];

//     cout << "enter ur name\n";
//     cin >> name;
//     cout << surname;
//     cout << "\n";
//     cout << strlen(name) << "\t";                    // count length of strings
//     cout << "\n uppercase=" << strupr(name) << "\n"; // capital
//     cout << "\n lowercase=" << strlwr(name) << "\n"; // small
//     cout << strcat(name, surname);                   // string concatenation
//     cout << "\n";
//     cout << "\n name =" << name << "\n";
//     cout << "\n surname=" << surname;
//     cout << strcpy(name, surname); // string copy
//     cout << "\n name=" << name << "\n";
//     cout << "\n surname=" << surname;
// }

// #include <iostream>
// using namespace std;
// #include <string.h>
// int main()
// {
//     char pwd[10];
//     char repwd[20];

//     cout << "enter ur password\n";
//     cin >> pwd;
//     cout << "enter ur repassword\n";

//     cout << repwd;
//     cout<<"\n";
//     if(strcmp(pwd,repwd)==0){
//         cout<<"correct";
//     }
//     else{
//         cout<<"not correct";
//     }

// }

//wap to check  the give string is palindrone or not with the help of function

#include <iostream>
using namespace std;
#include <string.h>
int main()

{
    char name[0];
    char rename[20];

    cout << "enter ur name\n";
    cin >> name;
    strcpy(rename, name);
    cout << "\n";
    cout << strrev(rename);
    cout << "\n";

    if (strcmp(rename, name) == 0)
    {
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}

 