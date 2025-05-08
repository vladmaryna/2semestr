#include <iostream>
#include <string>
using namespace std;

struct Time {
    int hour;
    int minute;
};

struct Train {
    int number;
    string destination;
    int distance;
    Time departure;
    Time arrival;
    int travelMinutes;
};

int main() {
    const int n = 4;
    Train trains[n];

    for (int i = 0; i < n; i++) {
        cout << "Поїзд #" << i + 1 << endl;
        cout << "Номер поїзда: ";
        cin >> trains[i].number;
        cout << "Станція призначення: ";
        cin.ignore(); getline(cin, trains[i].destination);
        cout << "Відстань (км): ";
        cin >> trains[i].distance;
        cout << "Час відправлення (год хв): ";
        cin >> trains[i].departure.hour >> trains[i].departure.minute;
        cout << "Час прибуття (год хв): ";
        cin >> trains[i].arrival.hour >> trains[i].arrival.minute;
        cout << "Час у дорозі (хв): ";
        cin >> trains[i].travelMinutes;
    }

    // а) Найдовша рога
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (trains[i].travelMinutes > trains[maxIndex].travelMinutes)
            maxIndex = i;
    }

    cout << "\nНайтриваліший поїзд: #" << trains[maxIndex].number
         << ", Станція: " << trains[maxIndex].destination << endl;

    cout << "\nПоїзди до Києва між 6 і 10 ранку:\n";
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (trains[i].destination == "Київ") {
            int h = trains[i].departure.hour;
            if (h >= 6 && h <= 10) {
                found = true;
                cout << "Номер: " << trains[i].number
                     << ", Відправлення: " << h << ":" << trains[i].departure.minute
                     << ", Прибуття: " << trains[i].arrival.hour << ":" << trains[i].arrival.minute
                     << ", Час у дорозі: " << trains[i].travelMinutes << " хв"
                     << ", Відстань: " << trains[i].distance << " км\n";
            }
        }
    }

    if (!found)
        cout << "Таких поїздів немає.\n";

    return 0;
}