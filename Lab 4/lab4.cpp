//============================================================================
// Name        : lab4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <cctype>  // For the isalpha function
#include <string>  // For string manipulation
#include <algorithm>
#include <vector>
using namespace std;

//problem 1
/*
char processChar(char c) {
    if (isalpha(c)) {
        return toupper(c);  // Convert to uppercase
    }
    return ' ';  // Replace non-alphabetic characters with space
}


int main() {
    ifstream inputFile("LabInput4-1.txt");


    if (!inputFile) {
        cerr << "Error: Unable to open input file." << endl;
        return 1;
    }
    string processedChars;
    string finalchar;
    char c;
    while (inputFile.get(c)) {
        processedChars += processChar(c);
    }
    for (string::size_type i=0; i<processedChars.length();i++){
    	char c=processedChars[i];
    	if(c != ' '){
    		finalchar +=c;
    	}
    }
    inputFile.close();
    ofstream outputFile("LabOutput4-1.txt");
    if (!outputFile) {
        cerr << "Error: Unable to open output file." << endl;
        return 1;
    }
    outputFile <<finalchar;
    outputFile.close();
    cout << "File processing and writing completed successfully." << endl;
    return 0;
}

//problem 2


const int MAX_ENTRIES = 50;
// Function to read integers from the keyboard
int readFromKeyboard(int arr[]) {
    int count = 0;
    cout << "Enter integers (1-10) separated by spaces. Enter 0 to finish: ";
    while (true) {
        int num;
        cin >> num;
        if (num == 0 || count >= MAX_ENTRIES) {
            break;
        }
        if (num >= 1 && num <= 10) {
            arr[count++] = num;
        } else {
            cout << "Invalid input. Please enter an integer between 1 and 10." << endl;
        }
    }
    return count;
}
// Function to read integers from a file
int readFromFile(const string filename, int arr[]) {
    int count = 0;
    ifstream inputFile("LabInput4-2.txt");
    if (!inputFile) {
        cerr << "Error: Unable to open file '" << filename << "'" << endl;
        return count;
    }
    while (count < MAX_ENTRIES && inputFile >> arr[count]) {
        if (arr[count] >= 1 && arr[count] <= 10) {
            count++;
        }
    }
    inputFile.close();
    return count;
}


void countAndPrint(int arr[], int count) {
    sort(arr, arr + count, greater<int>());
    cout << "Distinct Array Elements  Count" << endl;

    ofstream outputFile("result.txt");
    if (!outputFile) {
        cerr << "Error: Unable to open result file." << endl;
        return;
    }
    // Initialize an array to store the frequency of numbers from 1 to 10
    int frequency[11] = {0}; // Index 0 is not used
    // Count the occurrences of each number in the array
    for (int i = 0; i < count; i++) {
        int num = arr[i];
        if (num >= 1 && num <= 10) {
            frequency[num]++;
        }
    }
    outputFile<<"N"<<"\t"<<"Count\n";
    for (int i = 1; i <= 10; i++) {
        if (count > 0) {
            cout << " " << i << "                      " << frequency[i] << endl;
            outputFile << i << "\t" << frequency[i] << endl;
        }
    }
    outputFile.close();
}
int main(){

    int arr[MAX_ENTRIES];
    int count;

    cout << "Choose an option:" << endl;
    cout << "1. Read from the keyboard" << endl;
    cout << "2. Read from a file [LabInput4-2.txt]" << endl;
    cout << "Enter your choice [1 or 2]: ";

    int choice;
    cin >> choice;

    switch (choice) {
        case 1:
            count = readFromKeyboard(arr);
            break;
        case 2:
            count = readFromFile("LabInput4-2.txt", arr);
            break;
        default:
            cout << "Invalid choice. Please enter 1 or 2." << endl;
            return 1;
    }
    if (count == 0) {
        cout << "No valid integers found." << endl;
        return 1;
    }
    countAndPrint(arr, count);
    cout << "Results have been written to 'result.txt'." << endl;
return 0;
}
*/



void mergeSortedFiles(const string& inputFileName1, const string& inputFileName2, const string& outputFileName) {
    ifstream inputFile1("LabInput4-3.txt");
    ifstream inputFile2("LabInput4-4.txt");
    ofstream outputFile("MergedFile.txt");


    int number1, number2;


    // Read the first number from each input file
    inputFile1 >> number1;
    inputFile2 >> number2;


    while (!inputFile1.eof() && !inputFile2.eof()) {
        if (number1 < number2) {
            outputFile << number1 << "\n";
            inputFile1 >> number1;
        } else {
            outputFile << number2 << "\n";
            inputFile2 >> number2;
        }
    }


    // Append remaining numbers from the first input file
    while (!inputFile1.eof()) {
        outputFile << number1 << "\n";
        inputFile1 >> number1;
    }


    // Append remaining numbers from the second input file
    while (!inputFile2.eof()) {
        outputFile << number2 << "\n";
        inputFile2 >> number2;
    }


    inputFile1.close();
    inputFile2.close();
    outputFile.close();
}


int main() {
    string inputFileName1 = "LabInput4-3.txt";
    string inputFileName2 = "LabInput4-4.txt";
    string outputFileName = "MergedOutput.txt";


    mergeSortedFiles(inputFileName1, inputFileName2, outputFileName);


    cout << "Numbers from " << inputFileName1 << " and " << inputFileName2 << " merged and saved to " << outputFileName << ".\n";


    return 0;
}

