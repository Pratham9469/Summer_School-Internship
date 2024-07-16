#include<iostream>
#include<list>

using namespace std;

int main () {
    list <int> l = {13,14,16,11,10,10};
    l.push_back(10);
    l.push_front(11);
    for (int i : l) {
        cout << i << " ";
    }
    cout << endl;
    l.erase(l.begin());
    cout << "After Erase : " << endl;
    for (int i : l) {
        cout << i << " ";
    }
    cout << "\nSize of List : " << l.size() << endl;
    for (int i : l) {
        cout << i << " ";
    }
    cout << endl;
    l.unique();
    for (int i : l) {
        cout << i << " ";
    }

    l.reverse();
    cout << endl;
    for (int i : l) {
        cout << i << " ";
    }
    l.resize(13);
    cout << endl;
    for (int i : l) {
        cout << i << " ";
    }
}