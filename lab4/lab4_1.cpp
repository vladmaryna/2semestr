#include <iostream>
#include <string>
using namespace std;

struct Student {
    string lastName;
    string firstName;
    double averageGrade;
    char gender;
};

int main() {
    Student students[4];

    // Введення інформації
    for (int i = 0; i < 4; i++) {
        cout << "Студент #" << i + 1 << endl;
        cout << "Прізвище: ";
        cin >> students[i].lastName;
        cout << "Ім’я: ";
        cin >> students[i].firstName;
        cout << "Середній бал: ";
        cin >> students[i].averageGrade;
        cout << "Стать (m/f): ";
        cin >> students[i].gender;
    }

    cout << "\nСтудентки, які отримують стипендію :\n";
    for (int i = 0; i < 4; i++) {
        if (students[i].gender == 'f' && students[i].averageGrade >= 4.0) {
            cout << "Прізвище: " << students[i].lastName
                 << ", Ім’я: " << students[i].firstName
                 << ", Бал: " << students[i].averageGrade << endl;
        }
    }

    return 0;
}