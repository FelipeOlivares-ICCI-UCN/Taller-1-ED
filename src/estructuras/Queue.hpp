#pragma once
#include <iostream>
#include <stdexcept>
#include "Node.hpp"



template <class T>
class Queue {
private:
    Node<T>* start;
    Node<T>* end;
public:
    Queue() {
        start = nullptr;
        end = nullptr;
    };
    ~Queue() {
        while (start != nullptr) {
            Node<T> * temp = start;
            start = start->getNext();
            delete temp;
        }
    };

    void push(T value) {
        Node<T>* newNode = new Node<T>(value);

        if (start == nullptr) {
            start = newNode;
            end = newNode;
        }
        else {
            end->setNext(newNode);
            end = newNode;
        }
    }

    void pop() {
        if (start == nullptr) {
            std::cout << "Queue is empty" << std::endl;
            return;
        }

        Node<T>* temp = start;
        start = start->getNext();

        delete temp;

        if (start == nullptr) {
            end = nullptr;
        }
    }

    T top() {
        if (start == nullptr) {
            throw std::out_of_range("Queue is empty");
        }

        return start->getValue();
    }

};