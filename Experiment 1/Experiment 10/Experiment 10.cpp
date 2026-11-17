#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
int main() {
    vector<int> marks = {85, 70, 90, 65, 80};

    cout << "Student Marks:\n";
    for (int mark : marks)
        cout << mark << ' ';

    sort(marks.begin(), marks.end());
    cout << "\nSorted Marks:\n";
    for (int mark : marks)
        cout << mark << ' ';

    auto it = find(marks.begin(), marks.end(), 90);
    if (it != marks.end())
        cout << "\n90 Marks Found!";
    else
        cout << "\nMarks Not Found!";

    map<int, int> student;
    student[1] = 85;
    student[2] = 70;
    student[3] = 90;
    student[4] = 65;
    student[5] = 80;

    cout << "\n\nStudent Records:\n";
    for (auto entry : student)
        cout << entry.first << " -> " << entry.second << '\n';
    return 0;
}