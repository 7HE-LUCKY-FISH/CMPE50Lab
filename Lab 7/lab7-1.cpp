#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;
//bryan lin
class Rational {
private:
    int numerator;
    int denominator;


    void simplify() {
        int gcd = abs(__gcd(numerator, denominator));
        numerator /= gcd;
        denominator /= gcd;
    }


public:
    Rational(int num = 0, int den = 1) : numerator(num), denominator(den) {
        if (denominator == 0) {
            cerr << "Error: Denominator cannot be zero. Setting denominator to 1." << endl;
            denominator = 1;
        }
        simplify();
    }
    friend istream& operator>>(istream& in, Rational& r) {
        in >> r.numerator;
        in.ignore(1);
        in >> r.denominator;
        r.simplify();
        return in;
    }

    friend ostream& operator<<(ostream& out, const Rational& r) {
        out << r.numerator << '/' << r.denominator;
        return out;
    }

    friend Rational add(const Rational& r1, const Rational& r2) {
        int new_num = r1.numerator * r2.denominator + r2.numerator * r1.denominator;
        int new_den = r1.denominator * r2.denominator;
        return Rational(new_num, new_den);
    }
    friend Rational subtract(const Rational& r1, const Rational& r2) {
        int new_num = r1.numerator * r2.denominator - r2.numerator * r1.denominator;
        int new_den = r1.denominator * r2.denominator;
        return Rational(new_num, new_den);
    }
    friend Rational multiply(const Rational& r1, const Rational& r2) {
        int new_num = r1.numerator * r2.numerator;
        int new_den = r1.denominator * r2.denominator;
        return Rational(new_num, new_den);
    }
    friend Rational divide(const Rational& r1, const Rational& r2) {
        if (r2.numerator == 0) {
            cerr << "Error: Division by zero. Returning 0/1." << endl;
            return Rational(0, 1);
        }
        int new_num = r1.numerator * r2.denominator;
        int new_den = r1.denominator * r2.numerator;
        return Rational(new_num, new_den);
    }
    friend bool equal(const Rational& r1, const Rational& r2) {
        return (r1.numerator == r2.numerator) && (r1.denominator == r2.denominator);
    }
    friend bool less_than(const Rational& r1, const Rational& r2) {
        return (r1.numerator * r2.denominator < r2.numerator * r1.denominator);
    }
};
int main() {
    Rational r1, r2;
    cout << "Enter the first rational number (numerator/denominator): ";
    cin >> r1;
    cout << "Enter the second rational number (numerator/denominator): ";
    cin >> r2;


    Rational sum = add(r1, r2);
    Rational difference = subtract(r1, r2);
    Rational product = multiply(r1, r2);
    Rational quotient = divide(r1, r2);


    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;
    cout << "Quotient: " << quotient << endl;


    if (equal(r1, r2)) {
        cout << "The two rational numbers are equal." << endl;
    } else {
        cout << "The two rational numbers are not equal." << endl;
    }


    if (less_than(r1, r2)) {
        cout << "The first rational number is less than the second." << endl;
    } else {
        cout << "The first rational number is not less than the second." << endl;
    }


    return 0;
}
/*
 * Enter the first rational number (numerator/denominator): 13/-39
Enter the second rational number (numerator/denominator): -2/-8
Sum: -1/12
Difference: -7/12
Product: -1/12
Quotient: -4/3
The two rational numbers are not equal.
The first rational number is less than the second.
 *
 *
 *
 *
 *
 *
 *
 * */
