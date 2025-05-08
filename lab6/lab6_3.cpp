#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Team {
    string name;
    string city;
    int points;
};

// Перевірка, чи місто вже є у списку
bool isCityInList(const vector<string>& cities, const string& city) {
    for (const auto& c : cities) {
        if (c == city)
            return true;
    }
    return false;
}

int main() {
    int n;
    cout << "Кількість команд: ";
    cin >> n;

    Team* teams = new Team[n];
    for (int i = 0; i < n; ++i) {
        cout << "\nКоманда #" << i + 1 << endl;
        cout << "Назва команди: ";
        cin.ignore(); getline(cin, teams[i].name);
        cout << "Місто: ";
        getline(cin, teams[i].city);
        cout << "Кількість очок: ";
        cin >> teams[i].points;
    }

    vector<string> uniqueCities;
    for (int i = 0; i < n; ++i) {
        if (!isCityInList(uniqueCities, teams[i].city)) {
            uniqueCities.push_back(teams[i].city);
        }
    }

    cout << "\nУнікальні міста, з яких приїхали команди:\n";
    for (const auto& city : uniqueCities) {
        cout << "- " << city << endl;
    }

    delete[] teams;
    return 0;
}