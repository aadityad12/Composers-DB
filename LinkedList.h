#include "Node.h"
#include <iostream>

#pragma once

using namespace std;

template <class T>
class LinkedList {
    private:
        Node<T> * head;
        Node<T> * tail;
    public:
        LinkedList();
        ~LinkedList();
        void printList() const;
        void append(const T data);
        void prepend(const T data);
        bool removeFront();
        void insert(const T data);
        bool remove(const T data);
        bool find(const T data);
        bool isEmpty() const;
        T getFirst() const;
        T getLast() const;
};

template <class T>
LinkedList<T>::LinkedList() : head(nullptr), tail(nullptr) {}

template <class T>
LinkedList<T>::~LinkedList() {
    while (head) {
        removeFront();
    }
}

template <class T>
void LinkedList<T>::printList() const {
    Node<T>* temp = head;
    while (temp) {
        cout << temp->data <<endl;
        temp = temp->next;
    }
}

template <class T>
void LinkedList<T>::append(const T data) {
    Node<T>* newNode = new Node<T>(data);
    if (!head) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

template <class T>
void LinkedList<T>::prepend(const T data) {
    Node<T>* newNode = new Node<T>(data);
    if (!head) {
        head = tail = newNode;
    } else {
        newNode->next = head;
        head = newNode;
    }
}

template <class T>
bool LinkedList<T>::removeFront() {
    if (!head) return false;
    Node<T>* temp = head;
    head = head->next;
    delete temp;
    if (!head) tail = nullptr;
    return true;
}

template <class T>
void LinkedList<T>::insert(const T data) {
    if (!head || data < head->data) {
        prepend(data);
        return;
    }
    Node<T>* current = head;
    while (current->next && current->next->data < data) {
        current = current->next;
    }
    Node<T>* newNode = new Node<T>(data);
    newNode->next = current->next;
    current->next = newNode;
    if (!newNode->next) tail = newNode;
}

template <class T>
bool LinkedList<T>::remove(const T data) {
    if (!head) {
        return false;
    }
    if (head->data == data) {
        return removeFront();  
    } 

    Node<T>* current = head;
    while (current->next && !(current->next->data == data)) {
        current = current->next;
    }

    if (!current->next)  {
        return false;
    }
    
    Node<T>* toDelete = current->next;
    current->next = toDelete->next;
    if (!current->next) {
        tail = current;
    }
    delete toDelete;
    return true;
    
}

template <class T>
bool LinkedList<T>::find(const T data) {
    Node<T>* temp = head;
    while (temp) {
        if (temp->data == data) return true;
        temp = temp->next;
    }
    return false;
}

template <class T>
bool LinkedList<T>::isEmpty() const {
    return head == nullptr;
}

template <class T>
T LinkedList<T>::getFirst() const {
    return head ? head->data : T();
}

template <class T>
T LinkedList<T>::getLast() const {
    return tail ? tail->data : T();
}