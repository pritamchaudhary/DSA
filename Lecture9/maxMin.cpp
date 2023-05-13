#include<iostream>
#include<climits>
using namespace std;

int getMin(int num[], int n){
    int mini = INT_MAX;

    for(int i=0; i<n; i++){
        // if(num[i] < mini){
        //     mini = num[i];
        // }

        mini = min(mini, num[i]);
    }
    return mini;
}

int getMax(int num[], int n){
    int max = INT_MIN;

    for(int i=0; i<n; i++){
        if(num[i] > max){
            max = num[i];
        }
    }
    return max;
}

int main(){
    int size;
    cin>>size;

    int num[100];
    
    // taking input in an array
    for(int i=0; i<size; i++){
        cin>>num[i];
    }

    cout<<"Maximum value is "<<getMax(num, size)<<endl;
    cout<<"Minimum value is "<<getMin(num, size)<<endl;

    return 0;
}