#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    int id;
    string title;
    bool issued;

public:
    Book(int i, string t) {
        id = i;
        title = t;
        issued = false;
    }

    void issueBook() {
        if (!issued) {
            issued = true;
            cout << "Book issued successfully." << endl;
        } else {
            cout << "Book is already issued." << endl;
        }
    }

    void returnBook() {
        if (issued) {
            issued = false;
            cout << "Book returned successfully." << endl;
        } else {
            cout << "Book was not issued." << endl;
        }
    }

    void display() {
        cout << "\nBook ID: " << id << endl;
        cout << "Title: " << title << endl;
        cout << "Status: "
             << (issued ? "Issued" : "Available") << endl;
    }
};

int main() {
    Book book1(101, "C++ Programming");

    int choice;

    do {
        cout << "\n--- Library Management System ---\n";
        cout << "1. Display Book\n";
        cout << "2. Issue Book\n";
        cout << "3. Return Book\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                book1.display();
                break;

            case 2:
                book1.issueBook();
                break;

            case 3:
                book1.returnBook();
                break;

            case 4:
                cout << "Thank you!" << endl;
                break;

            default:
                cout << "Invalid choice." << endl;
        }

    } while (choice != 4);

    return 0;
}
