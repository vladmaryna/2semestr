#include <iostream>
#include <string>
using namespace std;

struct Time {
    int hour, minute, second;
};

struct Biathlete {
    string surname, name, patronymic;
    Time start;
    Time finish;
    Time duration;
};

struct Competition {
    Biathlete* athletes;
    int size;
};

int timeToSeconds(const Time& t) {
    return t.hour * 3600 + t.minute * 60 + t.second;
}

Time secondsToTime(int totalSeconds) {
    Time t;
    t.hour = totalSeconds / 3600;
    t.minute = (totalSeconds % 3600) / 60;
    t.second = totalSeconds % 60;
    return t;
}

void calculateDurations(Competition& comp) {
    for (int i = 0; i < comp.size; ++i) {
        int startSec = timeToSeconds(comp.athletes[i].start);
        int finishSec = timeToSeconds(comp.athletes[i].finish);
        int durationSec = finishSec - startSec;
        comp.athletes[i].duration = secondsToTime(durationSec);
    }
}

void printResults(const Competition& comp) {
    cout << "\nРезультати змагань:\n";
    for (int i = 0; i < comp.size; ++i) {
        const Biathlete& a = comp.athletes[i];
        cout << a.surname << " " << a.name << " " << a.patronymic
             << " | Час проходження: "
             << a.duration.hour << " год "
             << a.duration.minute << " хв "
             << a.duration.second << " сек\n";
    }
}

int main() {
    int n;
    cout << "Кількість учасників: ";
    cin >> n;

    Competition comp;
    comp.size = n;
    comp.athletes = new Biathlete[n];

    for (int i = 0; i < n; ++i) {
        cout << "\nУчасник #" << i + 1 << endl;
        cout << "Прізвище: ";
        cin >> comp.athletes[i].surname;
        cout << "Ім’я: ";
        cin >> comp.athletes[i].name;
        cout << "По батькові: ";
        cin >> comp.athletes[i].patronymic;
        cout << "Час старту (год хв сек): ";
        cin >> comp.athletes[i].start.hour >> comp.athletes[i].start.minute >> comp.athletes[i].start.second;
        cout << "Час фінішу (год хв сек): ";
        cin >> comp.athletes[i].finish.hour >> comp.athletes[i].finish.minute >> comp.athletes[i].finish.second;
    }

    calculateDurations(comp);
    printResults(comp);

    delete[] comp.athletes;
    return 0;
}