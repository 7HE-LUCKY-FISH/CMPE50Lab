#include <iostream>
#include <math.h>
#include<string>
#include<algorithm>

using namespace std;
//double add(double n, double k){
//    double t; 
//    t = n+ k;
//    return t;

//}



int secondlargest(int array[], int n) {
    int first = 0, second = -1;
    for (int i = 1; i < n; i++) {
        if (array[i] > array[first]) {
            second = first;
            first = i;
        }
    }
    return second;
}

int main(){
    /*
    /problem 1
    double numb1, numb2, numbt;
    cout <<"Enter a number: ";
    cin >> numb1;
    cout <<"Enter a second number: ";
    cin >> numb2; 
    numbt= add(numb1, numb2);
    cout << "The total is " << numbt << "\n";

    5+5 =10
    5.1 + 5 = 10.1

//problem 2
    string usr_str;
    cout << "Enter a string: ";
    cin >> usr_str;
    reverse(usr_str.begin(), usr_str.end()); 
	cout<<"The reversed string is: "<<usr_str<<"\n"; 
//alt answer

    string reversed= "";
    for (int i = usr_str.length() - 1; i >= 0; --i) {
        reversed += usr_str[i];
    }
    cout<<"This is the reversed string: "<<reversed<<"\n"; 
    abcde!
    !edcba
*/
//problem 3
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
/*Enter a integer: 19
Enter a integer: 20
Enter a integer: 10
Enter a integer: 19
Enter a integer: 17
Enter a integer: 7
Enter a integer: 5
Enter a integer: 2
Enter a integer: -5
Enter a integer: 0
Second largest: 20*/

}