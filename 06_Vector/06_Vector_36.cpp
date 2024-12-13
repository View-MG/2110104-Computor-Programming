#include<bits/stdc++.h>
using namespace std;
string grade[8] = {"F", "D" , "D+" , "C", "C+" , "B", "B+", "A"};
struct Student{
    string name;
    string gpax;
    size_t gpa;
};

struct Addgpax{
    string name;
    char charge;
};

bool checkGrade(const Student &a,const Student &b){
    return b.gpa < a.gpa;
}

int main()
{
    int a;
    cin >> a;
    vector<Student> student(a);
    vector<Addgpax> addStudent;
    for(int i=0;i<a;i++){
        cin >> student[i].name >> student[i].gpax;
        auto it = find(grade, grade+8, student[i].gpax);
        student[i].gpa=it - grade;
    }
    string line;
    cin.ignore();
    while(getline(cin, line)){
        string tmp1;
        char tmp2 = '\0';
        for (auto c : line) {
            if (c == ' ') {
                if (!tmp1.empty()) {
                    Addgpax newStudent = {tmp1, tmp2};
                    addStudent.push_back(newStudent);
                    tmp1.clear();
                    tmp2 = '\0';
                }
            } else if (c == '+' || c == '-') {
                tmp2 = c;
            } else {
                tmp1 += c;
            }
        }
        if (!tmp1.empty()) {
            Addgpax newStudent = {tmp1, tmp2};
            addStudent.push_back(newStudent);
        }
    }
    int count = 0;
    for (int i = 0; i < addStudent.size(); i++) {
        for (int j = 0; j < student.size(); j++) {
            if (student[j].name == addStudent[i].name) {
                count = j;
                break;
            }
        }
        if (addStudent[i].charge == '+') {
            if (student[count].gpa < 7) student[count].gpa++;
        } else if (addStudent[i].charge == '-') {
            if (student[count].gpa > 0) student[count].gpa--;
        }
    }
    sort(student.begin(),student.end(),checkGrade);
    for(auto i : student){
        cout << i.name << " " << grade[i.gpa] << endl;
    }
}