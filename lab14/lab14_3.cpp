#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* a = new Node{1, nullptr};
    Node* b = new Node{2, nullptr};
    Node* c = new Node{3, nullptr};

    a->next = b;
    b->next = c;

    Node* head = nullptr;
    head = a;
    c->next = nullptr;

    Node* prev = nullptr;
    Node* curr = head;
    while (curr) {
        if (curr == b) {
            if (prev) prev->next = curr->next;
            else head = curr->next;
            delete curr;
            break;
        }
        prev = curr;
        curr = curr->next;
    }

    for (Node* p = head; p; p = p->next)
        cout << p->data << " ";
    cout << endl;

    while (head) {
        Node* next = head->next;
        delete head;
        head = next;
    }

    return 0;
}