#include<bits/stdc++.h>
#include<algorithm>
#include<array>
#include<stack>

using namespace std;
int main () {
    stack<int> check;
    bool isEmpty;
    array<int, 4> arr = {5,6,1,3};
    cout << arr.size()<<endl;
    cout << arr.at(2) << endl;
    cout << arr.front()<<endl;
    cout << arr.back() << endl;
    isEmpty = arr.empty();
    check.push (5);
    check.push (10);
    cout << endl<< check.top() << endl;
    cout << isEmpty << endl;

}