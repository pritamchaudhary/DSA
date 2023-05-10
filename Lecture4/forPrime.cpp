
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    bool isPrime = 1;
    for(int i = 2; i<n; i++){
        
        if(n%i == 0){
            // cout<<"Not a Prime number";
            isPrime = 0;
            break;

        }
        // else{
            
        // }
    }
    if(isPrime == 0){
        cout<<"Not a Prime number"<<endl;
    }
    else{
        cout<<"is a Prime number"<<endl;
    }
}