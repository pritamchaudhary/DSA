#include<iostream>
using namespace std;

// bad practice
int& func(int a){
    int num = a;
    int& ans = num;
    return ans;
}

// pass by reference
void update2(int& n){
    n++;
}

// pass by value
void update(int n){
    n++;
}

int main(){
    // int i=5;

    // // create reference variable
    // int& j = i;

    // cout<< i <<endl;
    // i++;
    // cout<< i << endl;
    // j++;
    // cout<< i << endl;
    

    int n = 5;
    
    cout<< "Before "<< n << endl;
    update2(n);
    cout<< "After "<< n << endl;

    func(n); 

    return 0;
}