#pragma once
#include <cstddef>
#include <string>

struct Node {
    int value;
    Node* next;
    explicit Node(int v, Node* n=nullptr) : value(v), next(n) {}
};

class LinkedList {
public:
    LinkedList();
    ~LinkedList();
    void push_front(int v);
    void reverse(); // TODO
    std::string to_string() const;
    Node* head() const { return head_; }
private:
    Node* head_;
};
