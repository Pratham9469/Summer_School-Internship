#include<stack>
#include<iostream>

using namespace std;

int main () {
    stack <string> s;
    s.push("AJAY");
    s.push("AJAB");
    s.push("GAJAB");
    s.push("SAJAB");

    cout << "TOP ELEMENT : " << s.top() << endl;
    s.pop();
    cout << "TOP ELEMENT AFTER POP : " << s.top() << endl;
    cout << s.size() << endl;
    s.empty() ;
    cout << s.size();
}