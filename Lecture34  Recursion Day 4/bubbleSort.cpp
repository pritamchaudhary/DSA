#include<iostream>
using namespace std;

void sortArray(int *arr, int n){
    // base case --> already sorted
    if(n == 0 || n==1){
        return;
    }

    // solve one case only --> largest element placed at the end
    for(int i=0; i<n; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }

    // recursive call
    sortArray(arr, n-1);

}

int main(){
    int arr[5] = {3, 6, 2, 7, 4};

    sortArray(arr, 5);
    for(int i=0; i<5; i++){
        cout<< arr[i]<< " ";
    } cout<< endl;
    
    return 0;
}