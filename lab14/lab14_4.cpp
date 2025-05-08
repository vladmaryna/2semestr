#include <iostream>
#include <string>
using namespace std;

struct Item {
    string name;
    double price;
    Item* next;
};

int main() {
    int n = 4;
    Item* head = nullptr;
    Item* tail = nullptr;
    string names[] = {"Milk", "Bread", "Pen", "Candy"};
    double prices[] = {12.5, 9.8, 1.5, 5.2};

    for (int i = 0; i < n; i++) {
        Item* newItem = new Item{names[i], prices[i], nullptr};
        if (!head) head = tail = newItem;
        else {
            tail->next = newItem;
            tail = newItem;
        }
    }

    int count = 0;
    for (Item* p = head; p; p = p->next)
        if (p->price < 10) {
            count++;
            cout << p->name << " " << p->price << endl;
        }
    cout << "Count = " << count << endl;

    while (head) {
        Item* next = head->next;
        delete head;
        head = next;
    }

    return 0;
}