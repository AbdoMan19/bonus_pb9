//
// Created by abdel on 20/12/2022.
//
#include "bits/stdc++.h"
using namespace std;
#ifndef BONUS_PB9_SET_H
#define BONUS_PB9_SET_H
template <class T>
class mySet {
private:
    T *arr;
    int size;
    int capacity;
public:
    mySet();
    mySet (int  n );
    T &operator[](int n);
    void insert(T value);
    int getSize() const;
    int getCapacity() const;
    T find(T value);
    void remove(T value);
    ~mySet();
    friend ostream &operator<<(ostream &os, const mySet<T> &set) {
        for (int i = 0; i < set.getSize(); i++) {
            os << set.arr[i] << " ";
        }
        return os;
    }

};



#endif //BONUS_PB9_SET_H
