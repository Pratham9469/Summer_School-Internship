#include<string>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main () {
    string s = "HELLO";
    cout << (char)tolower(s[0]);
    for (char i : s) {
        cout << i;
    }
    cout << s.length();
    cout << s[4];
    s.reserve();
    for(char i : s) {
        cout << i ;
    }
}