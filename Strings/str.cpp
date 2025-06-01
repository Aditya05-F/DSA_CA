#include<iostream>
#include <string>
using namespace std;


int main() {
    string str1 = "Hello";
    string str2 = "World";
    
    string str3 = str1 + " " + str2;
    cout << "Concatenated string: " << str3 << endl;

   
    str3.pop_back();
    cout << "After removing last character: " << str3 << endl;


    cout << "Test case completed." << endl;

    return 0;
}