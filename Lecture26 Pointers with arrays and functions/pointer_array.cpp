#include<iostream>
using namespace std;

int main(){
    int arr[10]= {3,5,6,7, 89};
    cout<<"Address of first memory block is "<< arr <<endl;
    cout<<"Address of first memory block is "<< &arr[0] <<endl;

    cout<<"value at 0th index "<< *arr <<endl;
    cout<< *arr + 1<<endl;
    cout<< "value at first location "<< *(arr + 1)<<endl;

    cout<< "5th " <<arr[2] <<endl;
    cout<< "6th "<<*(arr+2) <<endl;

    int i = 3;
    cout<< i[arr] <<endl;

    int temp[10];
    cout<<sizeof(temp)<<endl;
    
    int *ptr = &temp[0];
    cout<< sizeof(ptr) <<endl;

    return 0;
}