#include "List.h"
#include <iostream>
#include <sstream>

using namespace std;

List::List() : head(nullptr), size(0) {}

List::~List() {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next; 
        delete temp;
    }
}

unsigned int List::getSize() const {
    return size;
}

void List::push_back(double value) {
    Node* newNode = new Node(value); 
    if (head == nullptr) {
        head = newNode; 
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next; 
        }
        temp->next = newNode; 
    }
    size++;
}

void List::pop_first(double value) {
    if (head == nullptr) return; 
    if (head->data == value) { 
        Node* temp = head;
        head = head->next; 
        delete temp;
        size--;
        return;
    }

    Node* current = head;
    while (current->next != nullptr) {
        if (current->next->data == value) {
            Node* temp = current->next;
            current->next = current->next->next; 
            delete temp;
            size--;
            return;
        }
        current = current->next;
    }
}

void List::pop_all(double value) {
    while (head != nullptr && head->data == value) {
        Node* temp = head;
        head = head->next; 
        delete temp;
        size--;
    }

    Node* current = head;
    while (current != nullptr && current->next != nullptr) {
        if (current->next->data == value) {
            Node* temp = current->next;
            current->next = current->next->next;
            delete temp;
            size--;
        } else {
            current = current->next; 
        }
    }
}

void List::replace_at(int index, double newValue) {
    if (index < 0 || index >= size) return; 

    Node* current = head;
    for (int i = 0; i < index; i++) {
        current = current->next; 
    }
    current->data = newValue; 
}

string List::toString() const {
    ostringstream oss;
    oss << "[";
    Node* current = head;
    while (current != nullptr) {
        oss << current->data;
        if (current->next != nullptr) {
            oss << ",";
        }
        current = current->next; 
    }
    oss << "]";
    return oss.str();
}
