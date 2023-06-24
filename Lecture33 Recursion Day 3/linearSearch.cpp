#include<iostream>
using namespace std;

void print(int arr[], int n){
    cout<< "Size of the array is "<< n << endl;
    for(int i=0; i<n; i++){
        cout<< arr[i] << " ";
    } cout<< endl;
}

bool linearSearch(int arr[], int size, int key){
    print(arr, size);
    // base case
    if(size == 0){
        return false;
    }

    if(arr[0] == key){
        return true;
    }
    else{
        int remainingPart = linearSearch(arr+1, size-1, key);
        return remainingPart;
    }
}

int main(){
    int arr[5] = {3, 5, 1, 2, 6};
    int size = 5;
    int key = 2;

    bool ans = linearSearch(arr, size, key);

    if(ans){
        cout<< "present"<<endl;
    }
    else{
        cout<< "not present"<<endl;
    }

    
    return 0;
}