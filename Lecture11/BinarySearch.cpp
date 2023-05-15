#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    // int mid = (start+end)/2;
    int mid = start + (end - start)/2;

    while(start<=end){
        
        if(arr[mid] == key){
            return mid;
        }

        if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        // mid = (start+end)/2;
        mid = start + (end - start)/2;
    }
    return -1;
}

int main(){
    int evenArr[6] = {3, 5, 6, 23, 64, 78};
    int oddArr[5] = {2, 6, 9, 10, 13};

    int evenindex = BinarySearch(evenArr, 6, 78);
    cout<< "Index of 78 is "<< evenindex<<endl;

    int oddindex = BinarySearch(oddArr, 5, 10);
    cout<< "Index of 10 is "<< oddindex<<endl;

    return 0;
}