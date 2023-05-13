
#include<iostream>
using namespace std;

void reverseArray(int arr[], int size){
    int start = 0;
    int end = size-1;

    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int size){

    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[5] = {5, 7, 9, -5, 9};
    int brr[6] = {7, 8, 34, 89, -5, 9};

    reverseArray(arr, 5);
    reverseArray(brr, 6);

    printArray(arr, 5);
    printArray(brr, 6);

    return 0;
}