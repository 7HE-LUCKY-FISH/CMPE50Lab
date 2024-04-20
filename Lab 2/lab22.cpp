//============================================================================
// Name        : lab22.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <math.h>
#include<string>
#include<algorithm>
using namespace std;
/*
int secondlargest(int arr[], int n) {
    int largest = arr[0], secondlargest= arr[0];
    for (int i = 1; i < n; i++) {
    	int currentnumb = arr[i];
    	if (currentnumb > largest){
    		largest = currentnumb;
    		secondlargest = largest;
    	}

    }
    return secondlargest;
}
*/
int main() {
	   int numbers[10];
	    for (int i =1; i<=10; i++){
	        cout<< "Enter a integer: ";
	        cin>> numbers[i];
	    }
	    //int answer = secondlargest(numbers, 10);
	    int largest = numbers[1], secondlargest= numbers[1];
	    for (int i = 1; i < 10; i++) {
	    	int currentnumb = numbers[i];
	    	if (currentnumb > largest){
	    		if (currentnumb = largest){
	    			continue;
	    		}
	    		largest = currentnumb;
	    		secondlargest = largest;
	    	}

	    }
	    cout <<"Second largest: "<< secondlargest;
	    return 0;

}
