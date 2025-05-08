#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct Director {
    string surname;
    string name;
};

struct Movie {
    string title;
    Director director;
    string country;
    int year;
    double cost;
    double income;
};

void findBestIncomeMovie(const vector<Movie>& movies) {
    double maxIncome = -1;
    int index = -1;
    for (size_t i = 0; i < movies.size(); ++i) {
        if (movies[i].year >= 1991 && movies[i].income > maxIncome) {
            maxIncome = movies[i].income;
            index = i;
        }
    }

    if (index != -1) {
        cout << "Фільм з найбільшим доходом після 1991:\n";
        const Movie& m = movies[index];
        cout << m.title << " | " << m.director.surname << " " << m.director.name
             << " | " << m.country << " | " << m.year
             << " | Вартість: " << m.cost << " | Дохід: " << m.income << endl;
    } else {
        cout << "Немає фільмів після 1991 року.\n";
    }
}

void sortAndPrintMovies(vector<Movie>& movies) {
    sort(movies.begin(), movies.end(), [](const Movie& a, const Movie& b) {
        return a.year < b.year;
    });

    cout << "\nВідсортований список фільмів за роком випуску:\n";
    for (const auto& m : movies) {
        cout << m.title << " | " << m.director.surname << " " << m.director.name
             << " | " << m.country << " | " << m.year
             << " | Вартість: " << m.cost << " | Дохід: " << m.income << endl;
    }
}

int main() {
    int n;
    cout << "Кількість фільмів: ";
    cin >> n;
    vector<Movie> movies(n);

    for (int i = 0; i < n; ++i) {
        cout << "\nФільм #" << i + 1 << endl;
        cout << "Назва: ";
        cin.ignore(); getline(cin, movies[i].title);
        cout << "Режисер (прізвище): ";
        getline(cin, movies[i].director.surname);
        cout << "Режисер (ім'я): ";
        getline(cin, movies[i].director.name);
        cout << "Країна: ";
        getline(cin, movies[i].country);
        cout << "Рік випуску: ";
        cin >> movies[i].year;
        cout << "Вартість (грн): ";
        cin >> movies[i].cost;
        cout << "Дохід (грн): ";
        cin >> movies[i].income;
    }

    findBestIncomeMovie(movies);
    sortAndPrintMovies(movies);

    return 0;
}