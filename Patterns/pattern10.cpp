// 1st method for storing row in a varible and then print that variable

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int row = 1;
//     while(row<=n){
//         int col = 1;
//         int value = row;
//         while(col<=row){
//             cout<<value<<" ";
//             value--;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }



// 2nd method using formula (i-j+1)

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<(i-j+1)<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}