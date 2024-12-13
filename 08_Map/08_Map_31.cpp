#include <bits/stdc++.h>
using namespace std;

struct Student {
    string name;
    double point;
    vector<string> change;
    string majornow;
};

bool sortingPoint(const Student &a, const Student &b) {
    return b.point < a.point;
}

bool sortingName(const Student &a, const Student &b) {
    return a.name < b.name;
}

int main() {
    int n;
    cin >> n;
    string x;
    int y;
    double yin;
    map<string, int> major;
    vector<Student> student;

    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        major[x] = y;
    }

    cin >> n;
    cin.ignore(); // Clear newline character from input buffer

    for (int i = 0; i < n; i++) {
        string z;
        vector<string> majortmp;
        
        cin >> x >> yin;
        getline(cin, z); // Read the rest of the line

        stringstream ss(z);
        string tmp;
        while (ss >> tmp) {
            majortmp.push_back(tmp);
        }

        Student newStudent = {x, yin, majortmp, ""};
        student.push_back(newStudent);
    }

    sort(student.begin(), student.end(), sortingPoint);

    for (auto& student : student) {
        for (const auto& change : student.change) {
            if (major[change] > 0) {
                student.majornow = change;
                major[change] -= 1;
                break; // Stop after the first valid major is found
            }
        }
    }

    sort(student.begin(), student.end(), sortingName);

    for (const auto& s : student) {
        cout << s.name << " " << s.majornow << endl;
    }

    return 0;
}
