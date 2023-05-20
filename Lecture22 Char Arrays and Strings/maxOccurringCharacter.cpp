#include<iostream>
using namespace std;

char getMaxOccCharacter(string s){
    int arr[26] = {0};

    // create an array of count of characters
    for(int i=0; i<s.length(); i++){
        char ch = s[i];
        int number = 0;
        // lowercase
        number = ch - 'a';
        // if(ch >= 'a' && ch <= 'z'){
        //     number = ch - 'a';
        // }
        // else{
        //     number = ch - 'A';
        // }
        arr[number]++;
    }
    // find maximum occurring character
    int maxi = -1; 
    int ans = 0;
    for(int i=0; i<26; i++){
        if(maxi < arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }

    char finalAnswer = 'a' + ans;
    return finalAnswer;
}

int main(){
    string s;
    cin>>s;

    cout<<getMaxOccCharacter(s)<<endl;

    return 0;
}