
#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key){
    
    for(int i=0; i<size; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[10] = {5, 10, 4 , 6, -5, -12, 7, 9, 14, 1};

    cout<<"Enter the Key which you want to find "<<endl;
    int key;
    cin>>key;

    bool found = linearSearch(arr, 10, key);
    if(found){
        cout<<"Key is present"<<endl;
    }
    else{
        cout<<"Key is absent"<<endl;
    }

    return 0;
}