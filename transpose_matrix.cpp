#include <iostream>
using namespace std;
int main()
{

    int r, c;
    cout << "\nenter the value of row\n";
    cin >> r;
    cout << "\nenter the value of column\n";
    cin >> c;
    if (r == c)
    {
        int arr[r][c];
        cout << "enter" << r * c << "value\n";
        for (int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cin>>arr[i][j];

            }
        }
        cout<<"\n array like \n";
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cout<<arr[i][j]<<"\t";
            }
            cout<<"\n";

        }
        cout<<"\n transpose matrix is \n";
        for(int i=0;i<r;i++){
            for(int j=i+1;j<c;j++){
                int tmp;
                tmp=arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=tmp;


            }
        }
        for(int i=0;i<r;i++){
            for( int j=0;j<c;j++){
                cout<<arr[i][j]<<"\t";

            }
            cout<<"\n";
        }
    }
    else{
        cout<<"not allowed";
    }

}