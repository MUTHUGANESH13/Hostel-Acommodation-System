#include <iostream>
using namespace std;

class Hostel {
private:
    string Name;
    int Rent, Bed;

public:
    Hostel(string name, int rent, int bed) {
        Name = name;
        Rent = rent;
        Bed = bed;
    }

    string getName() {
        return Name;
    }

    int getRent() {
        return Rent;
    }

    int getBed() {
        return Bed;
    }

    void reserve() {
        if (Bed > 0) {
            Bed = Bed - 1;
            cout << "\tBed Reserved Successfully!" << endl;
        }
    }
};

class Student {
private:
    string Name, RollNo, Address;

public:
    Student() : Name(""), RollNo(""), Address("") {}

    void setName(string name) {
        Name = name;
    }

    void setRollNo(string rollNo) {
        RollNo = rollNo;
    }

    void setAddress(string address) {
        Address = address;
    }

    string getName() {
        return Name;
    }

    string getRollNo() {
        return RollNo;
    }

    string getAddress() {
        return Address;
    }
};

int main() {
    Hostel h("3star", 5000, 2);

    cout << "\tHostel Name: " << h.getName() << endl;
    cout << "\tRent: " << h.getRent() << endl;
    cout << "\tAvailable Beds: " << h.getBed() << endl;

    Student s;
    bool exit = false;
    while (!exit) {
        system("cls");
        int val;
        cout << "\n\tWelcome To Hostel Accommodation System" << endl;
        cout << "\t**************************************" << endl;
        cout << "\t1. Reserve A Bed." << endl;
        cout << "\t2. Exit.\n" << endl;
        cout << "\tEnter Choice: ";
        cin >> val;

        if (val == 1) {
            system("cls");
            string name, rollNo, address;
            cout << "\tEnter Name of Student: ";
            cin >> name;
            s.setName(name);

            cout << "\tEnter RollNo of Student: ";
            cin >> rollNo;
            s.setRollNo(rollNo);

            cout << "\tEnter Address of Student: ";
            cin >> address;
            s.setAddress(address);

            if (h.getBed() > 0) {
                h.reserve();
                cout << "\n\tStudent Details:" << endl;
                cout << "\tName: " << s.getName() << endl;
                cout << "\tRollNo: " << s.getRollNo() << endl;
                cout << "\tAddress: " << s.getAddress() << endl;
                cout << "\tRemaining Beds: " << h.getBed() << endl;
            } else {
                cout << "\tSorry, Bed Not Available!" << endl;
            }
        } 
        else if (val == 2) {
            system("cls");
            exit = true;
            cout << "Good Luck!" << endl;
        }
    }
}
