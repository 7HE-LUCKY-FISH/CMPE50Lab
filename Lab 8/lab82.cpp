//============================================================================
// Name        : lab82.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
void displaySeats(char** seats, int numRows){
cout << "Available Seats:" << endl;
for (int i = 0; i < numRows; i++){
cout << i + 1 << " ";
for (int j = 0; j < 4; j++){
cout << " " << seats[i][j] << " ";
}
cout << endl;
}
}
int main(){
	int choice;
	cout << "Enter your choice 1 for user, 2 for file : " << endl;
	cin >> choice;
	if(choice == 1){
		int numRows;
		cout << "Enter the number of rows: ";
		cin >> numRows;
		char** seats = new char*[numRows];
		for(int i = 0; i < numRows; i++){
			seats[i] = new char[4];
			for (int j = 0; j < 4; j++){
				seats[i][j] = 'A' + j;
			}
		}
		displaySeats(seats, numRows);
		int totalSeats = numRows * 4;
		int passengersAssigned = 0;
		while(passengersAssigned < totalSeats){
			int row;
			char seat;
			cout << "Enter row and seat. -1 to quit: ";
			cin >> row;
			if (row == -1){
				break;
			}
			cin >> seat;
			if (row < 1 || row > numRows || seat < 'A' || seat > 'D'){
				cout << "Invalid input. Please enter a valid row and seat.\n";
				continue;
			}
			row--;
			int seatIndex = seat - 'A';
			if(seats[row][seatIndex] != 'X'){
				seats[row][seatIndex] = 'X';
				passengersAssigned++;
				displaySeats(seats, numRows);
			}
			else{
				cout << "Seat " << char(seat + 'A') << " in row " << row + 1 << " is already occupied." << endl;
			}
		 }
		cout << "Thank you." << endl;
		for (int i = 0; i < numRows; ++i){
			delete[] seats[i];
		}
		delete[] seats;
	}
	if (choice == 2){
		string fileName;
		cout << "Please type the name of the file: ";
		cin >> fileName;
		ifstream in_stream("lab8input.txt");
		if (!in_stream){
			cerr << "Failed to open the input file." << endl;
			return 1;
		}
		int numRows = 0;
		in_stream >> numRows;
		char** seats = new char*[numRows];
		int passengersAssigned = 0;
		string line;
		getline(in_stream, line);
		if (!line.empty() && line[line.length() - 1] == '\n'){
			line = line.substr(0, line.length() - 1);
}
		while(getline(in_stream, line)){
			if(line == "end"){
				break;
			}
			if(line.length() == 2){
				int row = line[0] - '0';
				char seat = line[1];
				if(row >= 1 && row <= numRows && seat >= 'A' && seat <= 'D'){
					row--;
					int seatIndex = seat - 'A';
					if (seats[row][seatIndex] != 'X'){
						seats[row][seatIndex] = 'X';
						passengersAssigned++;
						displaySeats(seats, numRows);
					}
					else{
						cerr << "Seat " << seat << " in row " << row + 1 << " is already occupied. Skipping: " << line << endl;
		 }
		 }
				else{
					cerr << "Invalid input in the file. Skipping: " << line << endl;
		 }
			}
			else{
				cerr << "Invalid input in the file. Skipping: " << line << endl;
		 }
		}
		cout << "Thank you for flying with us!" << endl;
		for (int i = 0; i < numRows; ++i){
			delete[] seats[i];
		}
		delete[] seats;
	}
	return 0;
}
//problem 2
/*

int main(){
    cout << "Remove Dupe.\n";
    char str[100];
    string userstring;
    cout<<"Enter a line of text: ";
    getline(cin,userstring);
    if(userstring.size()<sizeof(str)){
    	strcpy(str,userstring.c_str());
    }
    int size = strlen(str);
    char *noRepeat;
    noRepeat = delete_repeats(str, size);
    cout << noRepeat;


    return 0;

}
char* delete_repeats(const char letters[], int size) {
    char *temp = new char[size + 1];
    temp[0] = letters[0];
    int k = 1;
    for (int i = 1; i < size; i++) {
        bool exist = false;
        for (int j = 0; j < i; j++) {
            if (letters[j] == letters[i]) {
                exist = true;
                break;
            }
        }
        if (!exist) {
            temp[k] = letters[i];
            k++;
        }
    }


    temp[k] = '\0';
    return temp;
}



Enter your choice 1 for user, 2 for file :
1
Enter the number of rows: 11
Available Seats:
1  A  B  C  D
2  A  B  C  D
3  A  B  C  D
4  A  B  C  D
5  A  B  C  D
6  A  B  C  D
7  A  B  C  D
8  A  B  C  D
9  A  B  C  D
10  A  B  C  D
11  A  B  C  D
Enter row and seat. -1 to quit: 1S
Invalid input. Please enter a valid row and seat.
Enter row and seat. -1 to quit: 1D
Available Seats:
1  A  B  C  X
2  A  B  C  D
3  A  B  C  D
4  A  B  C  D
5  A  B  C  D
6  A  B  C  D
7  A  B  C  D
8  A  B  C  D
9  A  B  C  D
10  A  B  C  D
11  A  B  C  D
Enter row and seat. -1 to quit: 1D
Seat … in row 1 is already occupied.
Enter row and seat. -1 to quit: 11A
Available Seats:
1  A  B  C  X
2  A  B  C  D
3  A  B  C  D
4  A  B  C  D
5  A  B  C  D
6  A  B  C  D
7  A  B  C  D
8  A  B  C  D
9  A  B  C  D
10  A  B  C  D
11  X  B  C  D
Enter row and seat. -1 to quit: 12A
Invalid input. Please enter a valid row and seat.
Enter row and seat. -1 to quit: 11C
Available Seats:
1  A  B  C  X
2  A  B  C  D
3  A  B  C  D
4  A  B  C  D
5  A  B  C  D
6  A  B  C  D
7  A  B  C  D
8  A  B  C  D
9  A  B  C  D
10  A  B  C  D
11  X  B  X  D
Enter row and seat. -1 to quit: -1
Thank you.



problem 2 output
Remove Dupe.
Enter a line of text: to be or to not be to see
to berns
 */

