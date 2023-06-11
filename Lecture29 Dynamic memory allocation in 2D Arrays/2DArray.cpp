#include<iostream>
using namespace std;

int main(){

    // int n;
    // cin>>n;

    // creating a 2D array
    // int** arr = new int*[n];

    // for(int i=0; i<n; i++){
    //     arr[i] = new int[n];
    // }

    int row;
    cin>>row;
    int col;
    cin>>col;

    int** arr = new int*[row];

    for(int i=0; i<row; i++){
        arr[i] = new int[col];
    }



    // taking input in 2D array
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }

    cout<<endl;

    // printing output of 2D array
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<< " ";
        }
        cout<<endl;
    }

    // releasing memory
    for(int i=0; i<row; i++){
        delete []arr[i];
    }

    delete []arr;

    
    
    return 0;
}