#pragma once
#include <cstddef>

template <class T>
class Node {
    public:
        T data;
        Node<T>* next;
        Node (T d) : data(d), next(nullptr) {}
};
