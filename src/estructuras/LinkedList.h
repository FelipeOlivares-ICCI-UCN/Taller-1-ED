#pragma once
#include "Node.hpp"
#include <iostream>
using namespace std;

template <class T>
class LinkedList
{
private:
    Node<T>* start;
    Node<T>* end;

    int countNodes(Node<T>* head) {
        if (head == nullptr) {
            return 0;
        }
        return 1 + countNodes(head->getNext());
    }

public:
    LinkedList() {
        this->start = nullptr;
        this->end = nullptr;
    }

    ~LinkedList() {
        this->clear();
    }

    void insert(T item, int index) {
        if (this->empty()) {
            throw std::out_of_range("List is empty");
        }
        if (index < 0) {
            throw std::out_of_range("Invalid index");
        }

        if (index == 0) {
            this->insertFirst(item);
            return;
        }

        if (index > 0) {
            Node<T>* cursor = this->start;
            for (int i = 0; i < index - 1; i++) {
                if (cursor->getNext() == nullptr) {
                    throw std::out_of_range("Invalid index");
                }
                cursor = cursor->getNext();

            }
            Node<T>* nuevo = new Node<T>(item);

            nuevo->setNext(cursor->getNext());

            cursor->setNext(nuevo);

            if (nuevo->getNext() == nullptr) {
                this->end = nuevo;
            }
        }
    }

    void insertFirst(T item) {


        Node<T>* nuevo = new Node<T>(item);


        nuevo->setNext(this->start);
        this->start = nuevo;

        if (this->end == nullptr) {
            this->end = nuevo;
        }

    }

    void insertLast(T item) {
        Node<T>* nuevo = new Node<T>(item);

        if (this->empty()) {
            this->start = nuevo;
            this->end = nuevo;
        }

        else {
            this->end->setNext(nuevo);
            this->end = nuevo;
        }
    }

    T& get(int index) {
        if (this->empty()) {
            throw std::out_of_range("List is empty");
        }
        if (index < 0) {
            throw std::out_of_range("Invalid index");
        }

        if (index == 0) {
            return this->getFirst();
        }

        Node<T>* cursor = this->start;

        for (int i = 0; i < index; i++) {
            cursor = cursor->getNext();

            if (cursor == nullptr) {
                throw std::out_of_range("Invalid index");
            }
        }

        return cursor->getValue();
    }

    T& getFirst() {
        if (this->empty()) {
            throw std::out_of_range("List is empty");
        }
        return this->start->getValue();
    }

    T& getLast() {
        if (this->empty()) {
            throw std::out_of_range("List is empty");
        }
        return this->end->getValue();
    }

    void remove(int index) {
        if (this->empty()) {
            throw std::out_of_range("List is empty");
        }
        if (index < 0) {
            throw std::out_of_range("Invalid index");
        }

        if (index == 0) {
            this->removeFirst();
            return;
        }

        Node<T>* cursor = this->start;

        //Note for the future me:
        //We want to get the previous Node from the one we want to remove
        //This is our cursor
        for (int i = 0; i < index - 1; i++) {
            //We reach the end
            if (cursor->getNext() == nullptr) {
                throw std::out_of_range("Invalid index");
            }
            cursor = cursor->getNext();
        }

        //The actual node we want to remove
        Node<T>* temp = cursor->getNext();


        if (temp == nullptr) {
            throw std::out_of_range("Invalid index");
        }

        //We adjust the previous node (cursor)
        cursor->setNext(temp->getNext());
        if (temp == this->end) {
            this->end = cursor;
        }

        delete temp;
    }

    void removeFirst() {
        if (this->empty()) {
            throw std::out_of_range("List is empty");
        }

        //Note for the future me:
        //This is for be able to delete the memory
        //After changing the start...
        Node<T>* temp = this->start;

        this->start = this->start->getNext();

        if (this->start == nullptr) {
            this->end = nullptr;
        }

        //Now we can do that!
        delete temp;

    };

    void removeLast() {
        if (this->empty()) {
            throw std::out_of_range("List is empty");
        }

        if (start == end) {
            delete this->start;
            this->start = nullptr;
            this->end = nullptr;
            return;
        }

        Node<T>* cursor = this->start;
        while (cursor->getNext() != this->end) {
            cursor = cursor->getNext();
        }

        delete this->end;
        this->end = cursor;
        cursor->setNext(nullptr);

    }

    bool empty() {
        return this->start == nullptr;
    }

    void clear() {
        while (this->start != nullptr) {
            Node<T>* temp = this->start->getNext();

            delete this->start;

            this->start = temp;
        }

        this->end = nullptr;
    }

    //Used for debugging
    void printList() {
        if (this->empty()) {
            cout << "start: " << this->start << endl;
            cout << "end: " << this->end << endl;
            cout << "-----------------" << endl;
            return;
        }


        cout << "start: " << this->start->getValue() << endl;

        Node<T>* cursor = this->start->getNext();

        while (cursor != nullptr && cursor != this->end) {
            cout << "middle: " << cursor->getValue() << endl;
            cursor = cursor->getNext();
        }

    int size() {
        return countNodes(this->start);
    }

};

