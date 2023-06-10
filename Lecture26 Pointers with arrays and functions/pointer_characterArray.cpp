#include<iostream>
using namespace std;

int main(){
    int arr[10]= {2,3,6,7};
    cout<< arr <<endl;

    char ch[6] = "abcde";
    cout<< ch <<endl;

    char *c = &ch[0];
    cout<< c << endl;

    char temp = 'z';
    char *p = &temp;
    cout<< p << endl;

    
    return 0;
}