#ifndef VECTOR_H_
#define VECTOR_H_

#include <iostream>

using namespace std;

template <typename T>
class SimpleVector {
public:
    SimpleVector() {
        _capacity = 10;
        _size = 0;
        data = new T[_capacity];
    }

    void push_back(T value) {
        if (_size >= _capacity) {
            _capacity += 5;
        }
        data[_size] = value;
        _size++;
    }

    void pop_back() {
        if (_size > 0) {
            _size--;
        }
    }

    int size() const {
        return _size;
    }

    int capacity()  {
        return _capacity;
    }

    void print()  {
        for (int i = 0; i < _size; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }

private:
    T* data;
    int _size;
    int _capacity;
};

#endif
