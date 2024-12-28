// ythree dimentional array
#include<iostream>
using namespace std;
int main(){
    int arr[2][2][3]={1,2,34,5,5,6,7,89,1,2,3,6};
    for(int t=0;t<2;t++){
        for(int r=0;r<2;r++){
            for(int c=0;c<3;c++){
                cout<<arr[t][r][c]<<"\t";

            }
            cout<<"\n";
        }
        cout << "\n";
    }

}


