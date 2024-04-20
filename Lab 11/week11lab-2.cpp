//============================================================================
// Name        : week11lab.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
template <class T> T findMax(T x, T y)
{
    return (x > y) ? x : y;
}
int main() {
    // Test with integers
    int intResult = findMax(11, 10);
    cout << "Max of integers: " << intResult << endl;


    // Test with floating-point numbers
    double doubleResult = findMax(3.514, 2.717);
    cout << "Max of doubles: " << doubleResult << endl;


    // Test with characters
    char charResult = findMax('T', 'Z');
    cout << "Max of characters: " << charResult << endl;


    string resultstring = findMax("Alex", "Alexander");
    cout<<"Max of string: " << resultstring << endl;
    return 0;
}
/*
 *
 * Max of integers: 11
Max of doubles: 3.514
Max of characters: Z
Max of string: Alex
 *
 *
 *
 *
*/
