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
#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <stdexcept>
using namespace std;
// Function to populate vector with n random integers between 1 and 100
void populateVector(vector<int>& vec, int n) {
    for (int i = 0; i < n; ++i) {
        vec.push_back(rand() % 100 + 1);
    }
}


// Function to print vector elements
void printVector(const vector<int>& vec) {
    for (size_t i=0; i < vec.size(); ++i) {
        cout << vec[i] << " ";
    }
    cout << endl;
}


// Function to get element at a specified index, throwing an exception if out of bounds
int getElement(const vector<int>& vec, int index) {
    if (index < 0 || index >= vec.size()) {
        throw out_of_range("Index out of bounds");
    }
    return vec.at(index);
}


// Merge function for Merge Sort
void merge(vector<int>& vec, int left, int middle, int right, char direction) {
    int n1 = middle - left + 1;//left
    int n2 = right - middle;//right


    vector<int> leftVec(n1);
    vector<int> rightVec(n2);


    for (int i = 0; i < n1; ++i)
        leftVec[i] = vec[left + i];
    for (int j = 0; j < n2; ++j)
        rightVec[j] = vec[middle + 1 + j];


    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if ((direction == 'a' && leftVec[i] <= rightVec[j]) ||
            (direction == 'd' && leftVec[i] >= rightVec[j])) {
            vec[k] = leftVec[i];
            ++i;
        } else {
            vec[k] = rightVec[j];
            ++j;
        }
        ++k;
    }


    while (i < n1) {
        vec[k] = leftVec[i];
        ++i;
        ++k;
    }


    while (j < n2) {
        vec[k] = rightVec[j];
        ++j;
        ++k;
    }
}


// Merge Sort function
void mergeSort(vector<int>& vec, int left, int right, char direction) {
    if (left < right) {
        int middle = left + (right - left) / 2;


        mergeSort(vec, left, middle, direction);
        mergeSort(vec, middle + 1, right, direction);


        merge(vec, left, middle, right, direction);
    }
}


int main() {
    // Reading numbers from a file

    ifstream inputFile("numbers.txt");
    int num;
    vector<int> numbersFromFile;
    while (inputFile >> num) {
        numbersFromFile.push_back(num);
    }


    // Sorting and displaying the result
    char sortOrder;
    cout << "Enter sorting order ('a' for ascending, 'd' for descending): ";
    cin >> sortOrder;


    mergeSort(numbersFromFile, 0, numbersFromFile.size() - 1, sortOrder);
    cout << "Sorted Numbers: ";
    printVector(numbersFromFile);

    // Creating a new vector and displaying it
    int newSize;
    cout << "Enter the size for creating a new vector: ";
    cin >> newSize;


    vector<int> newVector;
    populateVector(newVector, newSize);
    cout << "New Vector: ";
    printVector(newVector);


    // Asking user to enter an index to retrieve an element value
    int index;
    cout << "Enter an index to retrieve an element value from the new vector: ";
    cin >> index;


    try {
        int element = getElement(newVector, index);
        cout << "Element at index " << index << ": " << element << endl;
    } catch (const out_of_range& ex) {
        cerr << "Exception: " << ex.what() << endl;
    }


    return 0;
}
*/
