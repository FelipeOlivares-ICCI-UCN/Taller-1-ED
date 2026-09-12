#pragma once

template <class T>
class Node {
private:
    T value_;
    Node* next_;
public:
    Node(T value) { this->value_ = value; this->next_ = nullptr; }
    ;
    T getValue() { return this->value_; };
    Node<T>* getNext(){ return this->next_; }

    void setValue(T value) {this->value_ = value;};

    void setNext(Node* next) { this->next_ = next; };
};
