//============================================================================
// Name        : Lab1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <cmath>


int is_prime(int num){
	if (num <=1){
		return false;
	}
	for (int i=2;i*i<=num; ++i){
		if(num % i ==0){
			return false;
		}
	}
	return true;
}


int main() {

	//Lab problem 1.2
	cout << "This is the first Code in CMPE-50 Lab" << endl; // prints !!!Hello World!!!

	/*
	This is the first Code in CMPE-50 Lab
	*/


	//Lab Problem 1.3

	int a;
	int b;

	cout <<"Enter a number for A: ";
	cin >> a;
	cout <<"Enter a number for B: ";
	cin >> b;
	int result = 1;
	for (int i =1; i<=b ; i++) {
		result = result * a;
	}
	cout << a<<" raised to the power "<<b<<" is "<< result << endl;

	/*
	 *
	Enter a number for A2
	Enter a number for B3
	2 raised to the power 3 is 8
	 *
	 */


	//Problem 1.4

	int factorial_input;
	int factor =1;

	cout <<"Enter a number for factorial: ";
	cin >> factorial_input;
	while(factorial_input <0){
		cout <<"Enter a positive number for factorial: ";
			cin >> factorial_input;
	}

	for (int i =1; i <= factorial_input ; ++i){
		factor = factor *i;
	}

	cout <<"The factorial for " << factorial_input << " of " << factor << endl;
	/*
	 * Enter a number for factorial: 0
		The factorial for 0 is 1
	 *
	 *Enter a number for factorial: 5
	The factorial for 5 of 120
	 *
	 */
// problem 1.5
	int k;
	cout <<"Enter a number greater than 2: ";
	cin >> k;

	while (k<= 2 ){
		cout <<"Please enter a valid number greater than 2: ";
		cin >>k;
	}
	cout<<"Prime numbers between 3 and " << k <<" are ";
	for (int num = 3; num <= k; num++){
		if (is_prime(num)){
			cout << num << ",";
		}
	}
	cout << endl;
	/*
	 *
	 *
	 *
	 *
	 * Enter a number greater than 2: 30
	Prime numbers between 3 and 30 are 3,5,7,11,13,17,19,23,29,
	 */

	return 0;
}
