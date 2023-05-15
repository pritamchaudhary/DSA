#include<iostream>
using namespace std;

int firstOcc(int arr[], int size, int key){
    int s = 0;
    int e = size-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(arr[mid] > key){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOcc(int arr[], int size, int key){
    int s = 0;
    int e = size-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(arr[mid] > key){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    int arr[11] = {1, 6, 7,7,7,7,7,7, 12, 15, 17};

    cout<<"first Occurrence of 7 is at index "<< firstOcc(arr, 11, 7)<<endl;
    cout<<"last occurrence of 7 is at index "<< lastOcc(arr, 11, 7)<<endl;

    int totalOcc = (lastOcc(arr, 11, 7) - firstOcc(arr, 11, 7)) + 1;
    cout<< "Total no. of Occurrence " << totalOcc<<endl;

    return 0;
}