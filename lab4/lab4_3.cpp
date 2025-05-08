#include <iostream>
#include <string>
using namespace std;

struct Time {
    int hour;
    int minute;
};

struct TVProgram {
    string title;
    string genre;
    Time start;
    Time end;
};

int main() {
    const int n = 3;
    TVProgram programs[n];

    for (int i = 0; i < n; i++) {
        cout << "Програма #" << i + 1 << endl;
        cout << "Назва: ";
        cin.ignore(); // очищення буфера
        getline(cin, programs[i].title);
        cout << "Жанр: ";
        getline(cin, programs[i].genre);
        cout << "Час початку (год хв): ";
        cin >> programs[i].start.hour >> programs[i].start.minute;
        cout << "Час завершення (год хв): ";
        cin >> programs[i].end.hour >> programs[i].end.minute;
    }

    cout << "\nРозклад програм:\n";
    for (int i = 0; i < n; i++) {
        cout << "Назва: " << programs[i].title
             << ", Жанр: " << programs[i].genre
             << ", Початок: " << programs[i].start.hour << ":" << programs[i].start.minute
             << ", Кінець: " << programs[i].end.hour << ":" << programs[i].end.minute << endl;
    }

    return 0;
}