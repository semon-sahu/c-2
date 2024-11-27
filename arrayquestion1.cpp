// wap to swipe and shift zero at our orignal place in array form
#include <iostream>
using namespace std;
int main()
// {
//     int arr[] = {4, 0, 3, 0, 34, 0, 67};
//     int s = sizeof(arr) / sizeof(arr[0]);
//     int arr2[s];
//     int k = 0;
//     for (int i = 0; i < s; i++)
//     {
//         cout << arr[i] << "\t";
//     }
//     cout << "\n Output Are: \n";
//     for (int i = 0; i < s; i++)
//     {
//         if (arr[i] != 0)
//         {
//             arr2[k] = arr[i];
//             k++;
//         }
//     }
//     while (k < s)
//     {
//         arr2[k] = 0;
//         k++;
//     }
//     for (int i = 0; i < k; i++)
//     {
//         cout << arr2[i] << "\t";
//     }
// }



//wap to print the prime number of an given array 
{
int arr[]={4,7,3,12,36,1,8,5,13,80};
int s=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<s;i++){
    cout<<arr[i]<<"\t";
}
cout<<"\n prime number are: \n";
for (int i=0;i<s;i++){
    int n=arr[i];
    int r=n-1;
    bool b=true;
    for(r;r>1;r--){
        if(n%r==0){
            b=false;
            break;

        }
    }
    if(b==true){
        cout<<n<<"\t";
        
    }
}
}
