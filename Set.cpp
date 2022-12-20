//
// Created by abdel on 20/12/2022.
//
#include "Set.h"
#include "bits/stdc++.h"
using namespace std;
template<class T>
mySet<T>::mySet() {
    size = 0;
    capacity = 1;
    arr = new T[capacity];
}

template<class T>
mySet<T>::mySet(int n) {
    size = 0;
    capacity = n;
    arr = new T[capacity];
}

template<class T>
T &mySet<T>::operator[](int n) {
    if (n < 0 || n >= getSize()) {
        throw invalid_argument("An error has occured, index out of range." );
    }
    return arr[n];
}

template<class T>
int mySet<T>::getSize() const {
    return size;
}

template<class T>
void mySet<T>::insert(T value) {
    for(int i = 0; i < getSize(); i++){
        if(arr[i] == value){
            return;
        }
    }
    if (getSize()==getCapacity()) {
        T *temp = new T[getCapacity() * 2];
        for (int i = 0; i < getSize(); i++) {
            temp[i] = arr[i];
        }
        delete[] arr;
        arr = temp;
        capacity *= 2;
    }
        arr[size] = value;
        size++;
}

template<class T>
int mySet<T>::getCapacity() const {
    return capacity;
}

template<class T>
T mySet<T>::find(T value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            return i;
        }
    }
    return -1;
}

template<class T>
void mySet<T>::remove(T value) {
    int index = find(value);
    if (index == -1) {
        return;
    }
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            for (int j = i; j < size; j++) {
                arr[j] = arr[j + 1];
            }
            size--;
            break;
        }
    }
}

template<class T>
mySet<T>::~mySet() {
    delete[] arr;
}


