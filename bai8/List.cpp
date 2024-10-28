#include "List.h"
#include <iostream>
#include <sstream>

using namespace std;

// @brief Constructor khởi tạo một danh sách trống với head = nullptr và size = 0.
List::List() : head(nullptr), size(0) {}

// @brief Destructor xóa tất cả các node khỏi danh sách liên kết để giải phóng bộ nhớ.
List::~List() {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next; 
        delete temp;    
    }
}

// @brief Trả về kích thước hiện tại của danh sách.
// @return Kích thước của danh sách.
unsigned int List::getSize() const {
    return size;
}

// @brief Thêm một giá trị vào cuối danh sách liên kết.
// @param value Giá trị cần thêm vào cuối danh sách.
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

// @brief Xóa node đầu tiên chứa giá trị cụ thể khỏi danh sách.
// @param value Giá trị cần xóa khỏi danh sách.
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

// @brief Xóa tất cả các node chứa một giá trị cụ thể khỏi danh sách.
// @param value Giá trị cần xóa khỏi danh sách.
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

// @brief Thay thế giá trị của node tại một vị trí cụ thể.
// @param index Vị trí của node cần thay đổi.
// @param newValue Giá trị mới cần thay thế tại vị trí index.
void List::replace_at(int index, double newValue) {
    if (index < 0 || index >= size) return; 

    Node* current = head;
    for (int i = 0; i < index; i++) {
        current = current->next; 
    }
    current->data = newValue; 
}

// @brief Trả về chuỗi biểu diễn danh sách liên kết dưới dạng mảng.
// @return Chuỗi biểu diễn của danh sách.
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
