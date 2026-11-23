#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    float marks;

public:
    // Constructor
    Student(int r, string n, float m) {
        rollNo = 14;
        name =  "rishi";
        setMarks(m);
    }

    // Getters
    int getRollNo() {
        return rollNo;
    }

    string getName() {
        return name;
    }

    float getMarks() {
        return marks;
    }

    // Setter with validation
    void setMarks(float m) {
        if (m >= 0 && m <= 100) {
            marks = m;
        } else {
            cout << "Invalid marks for " << name
                 << ". Setting marks to 0." << endl;
            marks = 0;
        }
    }

    // Display student details
    void display() {
        cout << rollNo << " | "
             << name << " | "
             << marks << endl;
    }
};

// Normal function to check result
void printResult(Student s) {
    cout << s.getName() << ": ";

    if (s.getMarks() >= 40) {
        cout << "PASS" << endl;
    } else {
        cout << "FAIL" << endl;
    }
}

int main() {

    
    Student batch[3] = {
        Student(Roll No, "Name”, Marks),
        Student(Roll No, “Name”, Marks),
        Student(Roll No, “Name”, Marks)
    };

    cout << "\nStudent Details\n";
    cout << "------------------------\n";

    for (int i = 0; i < 3; i++) {
        batch[i].display();
    }

    // Updating marks after re-evaluation
    batch[1].setMarks(45);

    cout << "\nStudent Results\n";
    cout << "------------------------\n";

    for (int i = 0; i < 3; i++) {
        printResult(batch[i]);
    }

    return 0;
}