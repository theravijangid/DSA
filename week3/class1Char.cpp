#include<iostream>
#include<string.h>
#include<string>
using namespace std;

int getLength(char name[]) {
    int length = 0;
    int i = 0;
    while(name[i] != '\0') {
        length++;
        i++;
    }
    return length;
}

void reverseString(char name[]) {
    int i = 0;
    int j = getLength(name) - 1;

    // while(i <= j) {
    //     swap(name[i], name[j]);
    //     i++;
    //     j--;
    // }
    for( ; i<=j; i++) {
        swap(name[i], name[j]);
        j--;
    }

}


void replaceSpaces(char sentence[] ) {
    int n = strlen(sentence);
    for(int i = 0; i<n; i++) {
        if(sentence[i] == ' ') {
            sentence[i] = '@';
        }
    }
}

bool palindrome(char name[] ) {
    int i=0;
    int j = getLength(name) - 1;
    while(i <= j) {
        if(name[i] == name[j]) {
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
} 

void toUpperCase(char name[]) {
    int j = getLength(name);
    for(int i=0; i<j; i++) {
        name[i] = name[i] - 'a' + 'A';
    }
}

void toLowerCase(char name[]) {
    int j = getLength(name);
    for(int i=0; i<j; i++) {
        if(name[i] < 96)
        name[i] = name[i] - 'A' + 'a';
    }
}

bool strcompare(string a, string b) {
    if(a.length() != b.length()) {
        return false;
    }
    else {
        for(int i=0; i<a.length(); i++) {
            if(a[i] != b[i]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    // character array 
    // char name[100];
    // cin>>name;
    
    // for(int i=0; i<5; i++) {
    //     cout<<" index " << i << " value: " << name[i]<<endl;
    // }

    // int value = (int)name[4];
    // cout<<"value is: "<<value<<endl;   // the value will be zero which i ascii value of null


    // char arr[100];
    // // cin>>arr;
    // cin.getline(arr, 50);
    // cout<<arr<<endl;


    // Q get length of string
    // char name[100];
    // cin.getline(name, 50);
    
    // int length = getLength(name);
    // cout<<"length : "<<length<<endl;
    // cout<<"length using strlen : "<< strlen(name)<<endl;


    // Q  Reverse a string
    // char name[100];
    // cin.getline(name, 50);

    // cout<<"Before Reverse " <<name <<endl;
    // reverseString(name);
    // cout<<"After Reverse " <<name;


    // Q Replace all spaces character with @
    // char name[100];
    // cin.getline(name, 50);
    
    // cout<<"Before replace " <<name <<endl;
    // replaceSpaces(name);
    // cout<<"After Replace " <<name;


    // Q Palindrome
    // char name[100];
    // cin>>name;
    
    // int ans = palindrome(name);
    // if(ans) {
    //     cout<<"It is a palindrome"<<endl;
    // }
    // else {
    //     cout<<"It is not a palindrome"<<endl;
    // }


    // Q convert to uppercase 
    // char name[100] = "ravi";

    // toUpperCase(name);
    // cout<<name<<endl;


    // Q convert to lowercase 
    // char name[100] = "rAVI";

    // toLowerCase(name);
    // cout<<name<<endl;



    //// ************************ STRING ************************
    // string str;
    // getline(cin, str);
    // str[0] = 'r';
    // str[1] = '\0';
    // str[2] = 'j';
    // cout<<str[1];
    // for(int i=0; i<3; i++) {
    //     cout<<str[i];
    // }

    // getline(cin, str);

    // functions string
    // cout<<"Length "<<str.length() <<endl;
    // cout<<"isEmpty "<< str.empty() <<endl;
    // str.push_back('A');
    // cout<<str<<endl;
    // str.pop_back();
    // cout<<str<<endl;
    // cout<<"Sub string "<< str.substr(0,4)<< endl;
    // cout<<str<<endl;

    // compare
    // string a = "Ravi";
    // string b = "Ravi";
    // if(a.compare(b) == 0) {
    //     cout<<" both are exactly same";
    // }
    // else {
    //     cout<<"Are not same";
    // }

    // Implement compare
    // string a = "Ravi";
    // string b = "Ravii";
    // int ans = strcompare(a, b);
    // if(ans) {
    //     cout<<"both are exactly same"<<endl;
    // }
    // else {
    //     cout<<"Are not same";
    // }


    // string a = "zavi";
    // string b = "Ravii";
    // cout<< a.compare(b) <<endl;  // if a is smaller than b than it returns -1 otherwise 1

    // string a = "hii how are you";
    // string x = "howw";
    // // cout<< a.find(x)<<endl;
    // if(a.find(x) == string::npos) {
    //     cout<<"Not found"<<endl;
    // }
    // else{
    //     cout<<"Found"<<endl;
    // }


    string str = "hello is my string";
    string rep = "bye";

    // str.replace(0,5 , rep);
    // str.replace(12, 6, "game");
    // str.replace(12, 6, 10 , '!');
    // cout<<str<<endl;

    cout<<str<<endl;
    str.erase(5, 3);
    cout<<str<<endl;


    // implement find and erase
    

    return 0;
}