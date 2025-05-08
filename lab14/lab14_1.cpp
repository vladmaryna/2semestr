#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = new Node{1, nullptr};
    head->next = new Node{2, nullptr};
    head->next->next = new Node{3, nullptr};
    head->next->next->next = new Node{4, nullptr};

    int sum = head->next->next->data + head->next->next->next->data;
    cout << "Sum = " << sum << endl;

    Node* temp = head;
    head = head->next;
    delete temp;

    int count = 0;
    for (Node* p = head; p != nullptr; p = p->next)
        if (p->data % 2 == 0) count++;

    cout << "Even count = " << count << endl;

    while (head) {
        Node* next = head->next;
        delete head;
        head = next;
    }

    return 0;
}
