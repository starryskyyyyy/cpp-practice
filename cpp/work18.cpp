#include<iostream>
using namespace std;

void sort(double &a, double &b, double &c) {
    if (a < b) {
        double temp = a;
        a = b;
        b = temp;
    }
    if (a < c) {
        double temp = a;
        a = c;
        c = temp;
    }
    if (b < c) {
        double temp = b;
        b = c;
        c = temp;
    }
    cout << a << " " << b << " " << c;
}

void sort(double &a, double &b) {
    if (a < b) {
        double temp = a;
        a = b;
        b = temp;
    }
    cout << a << " " << b;
}

int main() {
    cout << "what do you want to do? 1. sort 2 numbers 2. sort 3 numbers: ";
    int choice;
    cin >> choice;
    double a, b, c;
    if (choice == 1) {
        cout << "Enter 2 numbers: ";
        cin >> a >> b;
        cout << "Arranged from largest to smallest: ";
        sort(a, b);
        cout << endl;
    } else {
        cout << "Enter 3 numbers: ";
        cin >> a >> b >> c;
        cout << "Arranged from largest to smallest: ";
        sort(a, b, c);
        cout << endl;
    }
    return 0;
}