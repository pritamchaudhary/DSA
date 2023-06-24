#include<iostream>
using namespace std;

void reverseString(string& str, int i, int j){
    // base case
    if(i > j){
        return;
    }
    swap(str[i], str[j]);
    i++;
    j--;

    reverseString(str, i, j);
}

int main(){
    string name = "pritam";
    reverseString(name, 0, name.length()-1);
    cout<< name << endl;

    
    return 0;
}