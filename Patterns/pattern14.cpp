
// using formula ('A'+i+j-2)

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            char ch = 'A' + i + j - 2;
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}