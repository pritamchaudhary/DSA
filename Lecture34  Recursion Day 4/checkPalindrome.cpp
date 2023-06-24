#include<iostream>
using namespace std;

bool checkPalindrome(string str, int i, int j){
    // base case
    if(i > j)
        return true;
    
    if(str[i] != str[j])
        return false;

    else{
        return checkPalindrome(str, i+1, j-1);
    }
}

int main(){
    string name = "abbccbba";

    bool isPalindrome = checkPalindrome(name, 0, name.length()-1);
    if(isPalindrome){
        cout<< "It's a palindrome"<< endl;
    }
    else{
        cout<< "It's not a palindrome"<< endl;
    }
    
    return 0;
}