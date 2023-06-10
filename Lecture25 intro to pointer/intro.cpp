#include<iostream>
using namespace std;

int main(){
    int num = 5;
    cout<<num<<endl;

    // address of operator
    cout<<"Address of num is "<<&num <<endl;

    int *ptr = &num;
    cout<<"Value is: "<<*ptr<<endl;
    cout<<"Address is: "<<ptr<<endl;

    cout<<"Size of integer is "<<sizeof(num)<<endl;
    cout<<"Size of pointer is "<<sizeof(ptr)<<endl;

    return 0;
}