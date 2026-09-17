#include <iostream>
#include <ostream>

#include "Node.hpp"

template <class T>
class Stack {
private:
    Node<T>* start;
    int size_;
public:
    Stack(): start(nullptr), size_(0) {
    }

    ~Stack() {
        clear();
    }

    void push(T value) {
        Node<T>* newNode = new Node<T>(value);

        if (start == nullptr) {
            start = newNode;
        }
        else {
            newNode->setNext(start);
            start = newNode;
        }

        size_++;
    }

    void pop() {
        if (start == nullptr) {
            throw std::out_of_range("Stack is empty");
        }

        Node<T>* oldStart = this->start;

        this->start = this->start->getNext();

        delete oldStart;

        --this->size_;
    }

    //<= just for possible errors
    bool empty() {return this->size_ <= 0;}

    T& top() {

        if (this->empty()) {
            throw std::out_of_range("List is empty");
        }

        return this->start->getValue();
    }

    int size() {return this->size_;}

    void clear() {
        while (this->start != nullptr) {
            Node<T>* oldStart = start;
            start = start->getNext();

            delete oldStart;
        }

        this->size_ = 0;
    }

    void show() {
        Node<T>* cursor = start;
        while (cursor != nullptr) {
            std::cout << cursor->getValue() << std::endl;
            cursor = cursor->getNext();
        }
    }




};