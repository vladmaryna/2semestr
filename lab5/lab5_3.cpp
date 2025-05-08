#include <iostream>
#include <string>
using namespace std;

struct Address {
    string street;
    int house;
    int apartment;
};

struct Voter {
    string surname;
    string name;
    string patronymic;
    Address addr;
    string passport;
    int birthYear;
    bool voted;
};

int main() {
    const int n = 6;
    Voter voters[n];
    int currentYear = 2025;


    for (int i = 0; i < n; i++) {
        cout << "Виборець #" << i + 1 << endl;
        cout << "Прізвище: ";
        cin >> voters[i].surname;
        cout << "Ім’я: ";
        cin >> voters[i].name;
        cout << "По батькові: ";
        cin >> voters[i].patronymic;
        cout << "Вулиця: ";
        cin >> voters[i].addr.street;
        cout << "Будинок: ";
        cin >> voters[i].addr.house;
        cout << "Квартира: ";
        cin >> voters[i].addr.apartment;
        cout << "Паспорт: ";
        cin >> voters[i].passport;
        cout << "Рік народження: ";
        cin >> voters[i].birthYear;
        string votedStr;
        cout << "Проголосував (так/ні): ";
        cin >> votedStr;
        voters[i].voted = (votedStr == "так");
    }


    int youngTotal = 0, youngVoted = 0;
    for (int i = 0; i < n; i++) {
        int age = currentYear - voters[i].birthYear;
        if (age < 35) {
            youngTotal++;
            if (voters[i].voted) youngVoted++;
        }
    }

    if (youngTotal > 0)
        cout << "\nВідсоток проголосувавших молодших за 35: "
             << (youngVoted * 100.0 / youngTotal) << "%\n";
    else
        cout << "\nНемає виборців молодших за 35.\n";


    int zegelVoted = 0;
    for (int i = 0; i < n; i++) {
        if (voters[i].addr.street == "Зегеля" && voters[i].voted)
            zegelVoted++;
    }

    cout << "Кількість виборців з вулиці Зегеля, що проголосували: " << zegelVoted << endl;

    return 0;
}