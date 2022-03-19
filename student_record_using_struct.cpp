#include <iostream>
#include <string>
using namespace std;
struct student
{
    int roll;
    string name;
    int persentage;
    char grade;
};
int main()
{
    struct student stud[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "\n\t\tstudent " << i + 1 << endl;
        cout << "enter roll no\n";
        cin >> stud[i].roll;
        cout << "enter name \n";
        cin >> stud[i].name;
        cout << "enter persentage \n";
        cin >> stud[i].persentage;
        cout << "enter grade \n";
        cin >> stud[i].grade;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << "\n\t\tstudent no " << i + 1 << endl;
        cout << "name : " << stud[i].name << endl;
        cout << "roll : " << stud[i].roll << endl;
        cout << "persentage : " << stud[i].persentage << endl;
        cout << "grade : " << stud[i].grade << endl;
    }
    return 0;
}