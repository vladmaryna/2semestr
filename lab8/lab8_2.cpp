#include <iostream>
using namespace std;

int DaysInMonth(int m) {
    switch (m) {
        case 2: return 28;
        case 4: case 6: case 9: case 11: return 30;
        default: return 31;
    }
}

int main() {
    int m = 4;
    const char* months[] = {
        "", "січні", "лютому", "березні", "квітні", "травні", "червні",
        "липні", "серпні", "вересні", "жовтні", "листопаді", "грудні"
    };
    cout << "У " << months[m] << " " << DaysInMonth(m) << " днів" << endl;
    return 0;
}
