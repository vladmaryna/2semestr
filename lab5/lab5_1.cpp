#include <iostream>
#include <string>
using namespace std;

struct Address {
    string city;
    string street;
    int house;
};

struct Toy {
    string name;
    Address factory;
    double price;
    int ageFrom;
    int ageTo;
    bool isSport;
};

int main() {
    const int n = 5; // кількість іграшок
    Toy toys[n];

    // Ввід даних
    for (int i = 0; i < n; i++) {
        cout << "Іграшка #" << i + 1 << endl;
        cout << "Назва: ";
        cin >> toys[i].name;
        cout << "Місто заводу: ";
        cin >> toys[i].factory.city;
        cout << "Вулиця: ";
        cin >> toys[i].factory.street;
        cout << "Номер будинку: ";
        cin >> toys[i].factory.house;
        cout << "Ціна (грн): ";
        cin >> toys[i].price;
        cout << "Вікова категорія (від і до): ";
        cin >> toys[i].ageFrom >> toys[i].ageTo;
        string sportFlag;
        cout << "Для спорту (так/ні): ";
        cin >> sportFlag;
        toys[i].isSport = (sportFlag == "так");
    }

    double totalSportPrice = 0;

    for (int i = 0; i < n; i++) {
        if (toys[i].isSport && toys[i].ageTo <= 10) {
            totalSportPrice += toys[i].price;
        }
    }

    cout << "\nСумарна вартість іграшок для спорту до 10 років: " << totalSportPrice << " грн\n";
    return 0;
}