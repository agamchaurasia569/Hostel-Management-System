#include <iostream>
#include <vector>
using namespace std;

class Hostel {
private:
    string name;
    int rollNo;
    static int bed;
    static const int maxBeds = 50;
    static vector<Hostel> ve;

public:
    Hostel(string n = "", int r = 0) : name(n), rollNo(r) {}

    bool bedStatus() {
        if (bed < maxBeds) {
            bed++;
            return true;
        }
        return false;
    }

    void add(string n, int r) {
        Hostel hostel(n, r);
        ve.push_back(hostel);
        allocation();
    }

    void allocation() {
        if (bedStatus()) {
            cout << "You have allocated a bed in the hostel." << endl << endl;
        } else {
            cout << "Hostel is full" << endl << endl;
        }
    }

    void remove() {
        int rn;
        cout << "Enter roll no to remove student: ";
        cin >> rn;
        bool found = false;
        for(int i = 0; i < ve.size(); i++) {
            if (rn == ve[i].rollNo) {
                cout << "Name: " << ve[i].name << endl;
                cout << "RollNo: " << ve[i].rollNo << endl;
                ve.erase(ve.begin() + i);
                bed--;
                cout << "Student is removed from hostel." << endl << endl;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Student with RollNo " << rn << " not found." << endl << endl;
        }
    }

    void display() const {
        if (ve.empty()) {
            cout << "No students in the hostel." << endl << endl;
        } else {
            for (const auto& student : ve) {
                cout << "Name: " << student.name << endl;
                cout << "RollNo: " << student.rollNo << endl;
            }
            cout << endl;
        }
    }
};

// Static member initialization
int Hostel::bed = 0;
vector<Hostel> Hostel::ve;

int main() {
    string n;
    int r;
    Hostel hostel;
    cout << "Students Hostel" << endl;
    cout << "********************" << endl << endl;

    while (true) {
        cout << "Enter '1' to add a student" << endl;
        cout << "Enter '2' to remove a student from hostel" << endl;
        cout << "Enter '3' to display students of hostel" << endl;
        cout << "Enter '0' to exit the program" << endl;
        int choice;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter Name: ";
            cin >> n;
            cout << "Enter Roll No: ";
            cin >> r;
            hostel.add(n, r);
        } else if (choice == 2) {
            hostel.remove();
        } else if (choice == 3) {
            hostel.display();
        } else if (choice == 0) {
            break;
        } else {
            cout << "Invalid Input" << endl << endl;
        }
    }

    return 0;
}
