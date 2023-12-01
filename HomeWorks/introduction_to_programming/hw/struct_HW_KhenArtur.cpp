#include <iostream>
#include <string>

using namespace std;
/*
struct FootballPlayer {
    string name;
    int goalsScored;
    int gamesPlayed;
};
FootballPlayer findBestPlayer(FootballPlayer players[], int numPlayers) {
    FootballPlayer bestPlayer = players[0];
    for (int i = 1; i < numPlayers; ++i) {

        if (players[i].gamesPlayed > 0 &&
            players[i].goalsScored / players[i].gamesPlayed > bestPlayer.goalsScored / bestPlayer.gamesPlayed) {
            bestPlayer = players[i];
        }
    }
    return bestPlayer;
}
int main() {
    const int numPlayers = 3;
    FootballPlayer players[numPlayers];


    for (int i = 0; i < numPlayers; ++i) {
        cout << "Name " << i + 1 << ": ";
        cin >> players[i].name;
        cout << "gool";
        cin >> players[i].goalsScored;
        cout << "game";
        cin >> players[i].gamesPlayed;
    }

    // Вывод информации о футболистах, сыгравших менее 5 игр
    cout << "\n5 play:\n";
    for (int i = 0; i < numPlayers; ++i) {
        if (players[i].gamesPlayed < 5) {
            cout << "name " << players[i].name << ", gool " << players[i].goalsScored
                 << ", game " << players[i].gamesPlayed << endl;
        }
    }
    FootballPlayer bestPlayer = findBestPlayer(players, numPlayers);
    cout << "\nbest player:\n";
    cout << "name: " << bestPlayer.name << ", gool for game: "
         << bestPlayer.goalsScored / bestPlayer.gamesPlayed << endl;

    return 0;
}*/
/*

struct Student {
    string lastName;
    string group;
    double physicsGrade;
    double informaticsGrade;
};
double calculateAverageGrade(const Student& student) {
    return (student.physicsGrade + student.informaticsGrade) / 2.0;
}
int main() {
    const int numStudents = 3;
    Student students[numStudents];

    for (int i = 0; i < numStudents; ++i) {
        cout << "Введите фамилию студента " << i + 1 << ": ";
        cin >> students[i].lastName;
        cout << "Введите группу студента: ";
        cin >> students[i].group;
        cout << "Введите оценку по физике: ";
        cin >> students[i].physicsGrade;
        cout << "Введите оценку по информатике: ";
        cin >> students[i].informaticsGrade;
    }
    double maxAverageGrade = -1.0;
    Student bestStudent;

    for (int i = 0; i < numStudents; ++i) {
        double averageGrade = calculateAverageGrade(students[i]);

        if (averageGrade > maxAverageGrade) {
            maxAverageGrade = averageGrade;
            bestStudent = students[i];
        }
    }
    cout << "\nИнформация о студенте с наивысшим средним баллом:\n";
    cout << "Фамилия: " << bestStudent.lastName << ", Группа: " << bestStudent.group
         << ", Средний балл: " << calculateAverageGrade(bestStudent) << endl;

    return 0;
}*/

