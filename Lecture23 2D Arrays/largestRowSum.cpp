#include<iostream>
#include<climits>
using namespace std;

int largestSumArray(int arr[][4], int row, int col){

    int maxi = INT_MIN;
    int rowIndex = -1;
    for(int row=0; row<3; row++){
        int sum = 0;
        for(int col=0; col<4; col++){
            sum += arr[row][col];
        }

        if(sum > maxi){
            maxi = sum;
            rowIndex = row;
        }
    }
    cout<<"Maximum sum is "<<maxi<<endl;
    return rowIndex;
}

int main(){
    int arr[3][4];

    cout<<"Enter the Elements"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Printing the Array"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int answerIndex = largestSumArray(arr, 3, 4);
    cout<<"Max row is at index "<<answerIndex<<endl;
    
    return 0;
}