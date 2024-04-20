//============================================================================
// Name        : lab_3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <cmath>
#include <iomanip>
#include <vector>
#define rows 2
#define cols 5

double calculateRowAverage(double matrix[][5], int numRows, int numCols, int rowNum) {
    int sum = 0;  // Initialize the sum for the specified row
    for (int j = 0; j < numCols; j++) {
        sum += matrix[rowNum - 1][j];  // Add the element to the sum
    }
    double average = static_cast<double>(sum) / numCols;  // Calculate the average
    return average;

}

int main() {
    double grades[2][5], overall;
    int students=5;


    double average, sum =0;
    for (int i = 0; i < 2; i++) {
       for (int j = 0; j < students; j++) {
               cout << "Enter value for grades [" << i << "][" << j << "]: ";
               //cout << "Enter element at row " << i + 1 << ", column " << j + 1 << ": ";
               cin >> grades[i][j];
           }
       }

    int max_HW = grades[0][0];
    int min_HW = grades[0][0];

    int max_lab = grades[1][0];
    int min_lab = grades[1][0];

    //can change to function
     for (int k = 0; k< students; k++){
         if (grades[0][k] > max_HW){
             max_HW = grades[0][k];
         }
         if (grades[0][k] < min_HW){
             min_HW = grades[0][k];
         }
     }
     for (int i =0; i< rows; i++){
         sum =0;
         for(int j =0;j <cols; j++){
             sum += grades[i][j];
             average = sum/cols;
         }
         overall += average/2;
     }
     //cout << max_HW<<"\n";
     //cout << min_HW<<"\n";
     for (int k =0; k < students; k++){
         if (grades[1][k] > max_lab){
             max_lab = grades[1][k];
         }
         if (grades[1][k] < min_lab){
             min_lab = grades[1][k];
         }
     }

    double HWfin = calculateRowAverage(grades,2,5,1);
   	double Labfin = calculateRowAverage(grades,2,5,2);
       for (int i = 0; i < 2; i++) {
           if(i == 0){
               cout<<"HW:  ";
           }else{
               cout<<"Lab: ";
           }
           for (int j = 0; j < students; j++) {
           cout <<setw(3)<< grades[i][j] << " ";
           }
           if(i == 0){
               cout << "Max: " <<max_HW<<" ";
               cout << "Min:"<< min_HW<<" ";
               calculateRowAverage(grades,2,5,1);
           }else{
               cout <<"Max: "<< max_lab<<" ";
               cout <<"Min: "<< min_lab<<" ";
               calculateRowAverage(grades,2,5,2);
           }
           cout << endl;
       }
       cout<<"Avg: ";
       for (int j = 0; j < 5; j++) {
           int sum = 0;
           for (int i = 0; i < 2; i++) {
               sum += grades[i][j];
           }
           double average_col = static_cast<double>(sum) / 2.0;
           cout<<setw(3)<<average_col<<" ";
       }

       cout <<"\nOverall: "<< overall<<endl;

       if(Labfin >50 || HWfin>50){
       	cout<<"You pass.";
       }else{
       	cout<<"You did not pass. ";



/*
 *
 *
 *
 *
 *   HW:  100  90  80 100 100 Max: 100 Min:80
	Lab: 100 100  70  60  90 Max: 100 Min: 60
	Avg: 100  95  75  80  95
	Overall: 89
 * */



       }
       // problem 2
           int arr[3][3];
           cout << "Enter 3x3 matrix elements row by row:" << std::endl;
           for (int i = 0; i < 3; i++) {
               for (int j = 0; j < 3; j++) {
                   cout << "Enter element at row " << i + 1 << ", column " << j + 1 << ": ";
                   cin >> arr[i][j];
               }
           }

           // Check if it's an upper triangular matrix
           bool isUpperTriangular = false;
           for (int i = 0; i < 3; i++) {
               for (int j = 0; j < 3; j++) {
                   if (arr[1][0] == 0 && arr[2][0] ==0 && arr[2][1] == 0) {
                       isUpperTriangular = true;
                       break;
                   }
               }
               if (!isUpperTriangular) break;
           }

           // Check if it's a lower triangular matrix
           bool isLowerTriangular = false;
           for (int i = 0; i < 3; i++) {
               for (int j = 0; j < 3; j++) {
                   if (arr[0][1] == 0 && arr[0][2] ==0 && arr[1][2] ==0) {
                       isLowerTriangular = true;
                       break;
                   }
               }
               if (!isLowerTriangular) break;
           }

           for (int i = 0; i < 3; i++) {
               for (int j = 0; j < 3; j++) {
               cout <<setw(2)<< arr[i][j] << " ";
               }

               cout << endl;
           }

           // Determine and display the result
           if (isUpperTriangular) {
               cout << "The entered matrix is an upper triangular matrix." << endl;
           } else if (isLowerTriangular) {
               cout << "The entered matrix is a lower triangular matrix." << endl;
           } else {
               cout << "The entered matrix is a normal matrix." << endl;
           }

           /*
            *
            *
            *    1  2  9
 	 	 	 	 3  4  5
 	 	 	 	 6  7  8
				The entered matrix is a normal matrix.
            *
            *
            *
            *
            *
            *
            * */


	return 0;
}
