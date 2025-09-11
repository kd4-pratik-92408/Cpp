#include <iostream>
#include <string>
using namespace std;

// Base Class
class Product {
protected:
    int id;
    string title;
    float price;
public:
    Product(int id, string title, float price) {
        this->id = id;
        this->title = title;
        this->price = price;
    }
    virtual float getFinalPrice() = 0; // pure virtual (abstract method)
    virtual void display() = 0;        // to show details
    virtual ~Product() {} // virtual destructor to prevent memory leak
};

// Derived Class Book
class Book : public Product {
    string author;
public:
    Book(int id, string title, string author, float price)
        : Product(id, title, price) {
        this->author = author;
    }

    float getFinalPrice() override {
        return price - (price * 0.10); // 10% discount
    }

    void display() override {
        cout << "Book - ID: " << id << ", Title: " << title
             << ", Author: " << author
             << ", Price: " << price
             << ", Final Price (after 10% off): " << getFinalPrice() << endl;
    }
};

// Derived Class Tape
class Tape : public Product {
    string artist;
public:
    Tape(int id, string title, string artist, float price)
        : Product(id, title, price) {
        this->artist = artist;
    }

    float getFinalPrice() override {
        return price - (price * 0.05); // 5% discount
    }

    void display() override {
        cout << "Tape - ID: " << id << ", Title: " << title
             << ", Artist: " << artist
             << ", Price: " << price
             << ", Final Price (after 5% off): " << getFinalPrice() << endl;
    }
};

// Main Function
int main() {
    Product* arr[3]; // array of 3 Product pointers
    int choice;
    float total = 0.0;

    cout << "Purchase 3 Products (Book/Tape):\n";

    for (int i = 0; i < 3; i++) {
        cout << "\nEnter 1 for Book, 2 for Tape: ";
        cin >> choice;

        int id;
        string title, authorOrArtist;
        float price;

        cout << "Enter ID: ";
        cin >> id;
        cin.ignore();
        cout << "Enter Title: ";
        getline(cin, title);
        cout << "Enter Price: ";
        cin >> price;
        cin.ignore();

        if (choice == 1) {
            cout << "Enter Author: ";
            getline(cin, authorOrArtist);
            arr[i] = new Book(id, title, authorOrArtist, price);
        }
        else {
            cout << "Enter Artist: ";
            getline(cin, authorOrArtist);
            arr[i] = new Tape(id, title, authorOrArtist, price);
        }
    }

    cout << "\n--- Bill Details ---\n";
    for (int i = 0; i < 3; i++) {
        arr[i]->display();
        total += arr[i]->getFinalPrice();
    }

    cout << "\nTotal Bill (after discounts): " << total << endl;

    // Free memory to avoid leaks
    for (int i = 0; i < 3; i++) {
        delete arr[i];
    }

    return 0;
}
