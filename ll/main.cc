#include <iostream>

struct Node {
    int value;
    Node* next;
};

void print_ll(Node* head) {
    while (head != nullptr) {
        std::cout << head->value << ", ";
        head = head->next;
    }

    std::cout << "\n";
}


void insert_at(Node* head, int value, const int pos) {

}

void insert_back(Node*& head, int value) {
    if (head == nullptr) {
        head = new Node{ value, nullptr };
        return;
    }

    Node* last_node = head;
    while (last_node->next != nullptr) {
        last_node = last_node->next;
    }

    last_node->next = new Node { value, nullptr };
}

int delete_at(Node* head, const int position) {
    return 0;
}

void insert_front(Node*& head, int value) {
    head = new Node { value, head };
}

void delete_front(Node*& head) {
    if (head == nullptr)
        return;

    Node* temp = head;
    head = head->next;

    if (temp != nullptr)
        delete temp;
}

void delete_back(Node*& head) {
    if (head == nullptr)
        return;

    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }

    Node* second_last_node = head;
    while(second_last_node->next->next != nullptr) {
        second_last_node = second_last_node->next;
    }

    Node* last_node = second_last_node->next;
    second_last_node->next = nullptr;
    delete last_node;
}

void reverse(Node*& head) {

}

int main() {
    Node* head = nullptr;

    for (int i = 0; i < 5; i++) {
        insert_back(head, i+1);
    }
    print_ll(head);

    for (int i = 5; i < 10; i++) {
        insert_front(head, i+1);
    }
    print_ll(head);
}


