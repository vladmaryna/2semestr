#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = new Node{5, nullptr};
    head->next = new Node{3, nullptr};
    head->next->next = new Node{7, nullptr};

    Node* maxNode = head, *minNode = head;
    for (Node* p = head; p != nullptr; p = p->next) {
        if (p->data > maxNode->data) maxNode = p;
        if (p->data < minNode->data) minNode = p;
    }

    Node* temp = maxNode->next;
    maxNode->next = new Node{minNode->data, temp};

    Node* last = head;
    while (last->next) last = last->next;
    swap(head->data, last->data);

    for (Node* p = head; p != nullptr; p = p->next)
        cout << p->data << " ";
    cout << endl;

    while (head) {
        Node* next = head->next;
        delete head;
        head = next;
    }

    return 0;
}