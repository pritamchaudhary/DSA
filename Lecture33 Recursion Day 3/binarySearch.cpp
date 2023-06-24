#include<iostream>
using namespace std;

void print(int arr[], int s, int e){
    for(int i=s; i<e; i++){
        cout<< arr[i] << " ";
    } cout << endl;
}

bool binarySearch(int *arr, int s, int e, int key){
    cout<< endl;
    print(arr, s, e);
    // base case
    // element not found
    if(s > e){
        return false;
    }

    int mid = s + (e-s)/2;
    cout<< "value of the arr mid is "<< arr[mid]<< endl;

    // element found
    if(arr[mid] == key){
        return true;
    }

    if(arr[mid] < key){
        return binarySearch(arr, mid+1, e, key);
    }
    else{
        return binarySearch(arr, s, mid-1, key);
    }
}

int main(){
    int arr[6] = {2, 4, 6, 10, 14, 18};
    int size = 6;
    int key = 18;
    cout<< "present or not "<< binarySearch(arr, 0, 5, key)<<endl;
    
    return 0;
}