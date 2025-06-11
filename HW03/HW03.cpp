#include <iostream>
#include "Vector.h"

using namespace std;

int main() {
    SimpleVector<int> vec;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);
    vec.push_back(7);
    vec.push_back(8);
    vec.push_back(9);
    vec.push_back(10);
    vec.push_back(11);
    vec.print();

    cout << vec.size() << endl; 
    cout << vec.capacity() << endl;

    return 0;
}
