#include<iostream>
#include<queue>

using namespace std;

int main () {
    queue<string> s;
    s.push("ABRA");
    s.push("KA");
    s.push("DABRA");
    int size = s.size();
    for (int i=1;i<=size;i++) {
        cout << s.front();
        cout << " ";
        s.pop();
    }
    
}