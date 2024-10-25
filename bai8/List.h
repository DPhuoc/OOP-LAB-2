#pragma one

#include <string>

using namespace std;

class Node {
public:
    double data;  
    Node* next;   

    Node(double value) : data(value), next(nullptr) {} 
};

class List {
private:
    Node* head; 
    unsigned int size; 

public:
    List();          
    ~List();       

    void push_back(double value);         
    void pop_first(double value);         
    void pop_all(double value);           
    void replace_at(int index, double newValue); 
    unsigned int getSize() const;            
    string toString() const;              
};
