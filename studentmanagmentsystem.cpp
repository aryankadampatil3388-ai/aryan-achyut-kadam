#include <iostream>
using namespace std;

class Student {
public:
    int id;
    string name;
    float marks;

    void input() {
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() {
        cout << "\nID: " << id << "\nName: " << name << "\nMarks: " << marks << endl;
    }
};

int main() {
    Student s;
    s.input();
    s.display();
    return 0;
}
