#include <iostream>
using namespace std;
struct Student{
    string id;
    double gpax;
    char comprog,cal1,cal2;
};
int main(){
    Student student1,student2;
    cin >> student1.id >> student1.gpax >> student1.comprog >> student1.cal1 >> student1.cal2;
    cin >> student2.id >> student2.gpax >> student2.comprog >> student2.cal1 >> student2.cal2;
    bool basic1 = student1.comprog == 'A' && student1.cal1 <= 'C' && student1.cal2 <= 'C' ? true : false;
    bool basic2 = student2.comprog == 'A' && student2.cal1 <= 'C' && student2.cal2 <= 'C' ? true : false;
    //Case 1 Grade not meet at Minimum
    if(!basic1 && !basic2) cout << "None";
    else if(!basic1 && basic2) cout << student2.id;
    else if(basic1 && !basic2) cout << student1.id;
    //Case 2 Grade pass Both
    else if (student1.gpax > student2.gpax) cout << student1.id;
    else if (student1.gpax < student2.gpax) cout << student2.id;
    //Case 3 Check cal1 score
    else if(student1.cal1 < student2.cal1) cout << student1.id;
    else if(student1.cal1 > student2.cal1) cout << student2.id;
    //Case 4 Check cal2 score
    else if(student1.cal2 < student2.cal2) cout << student1.id;
    else if(student1.cal2 > student2.cal2) cout << student2.id;
    else if(student1.cal2 == student2.cal2) cout << "Both";
    else cout << "None";
}